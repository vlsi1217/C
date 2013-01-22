/*
Time: 17:30 Jan 21, 2013
addr: 32 SJ apt
Engr: Tony Z
Proj: K&R Exe 2-6, set the n bits begin at position p of x, to the rightmost n bits of y 
*/

/*
Idea: should use bitwise arithmetic operations, alike the examples showed in Chap 2.9
Example: n = 4, p = 6;
x = 0987654321
        1111        

y =   erejingT
          1111

replaced the x's  bits pointed by 1111, by last four bits pointed by 1111 in y.

so the result should be x' = 0987ingT21
*/

#include <stdio.h>
unsigned setbit(unsigned x, unsigned y, int n, int p);

int main()
{
	int num = 0xFFF;
    printf("num = 0x%x\n", num);

    num = setbit(num, 7, 4, 0xFFF5);
    printf("num = 0x%x\n", num);
    //unsigned x, y, ans;
    //x = 0xfffe;
    //y = 0xf57;
    //int n, p;
    //n = 4,
    //p = 6;
    //ans = setbit(x, y, n, p);
    //printf("%x\n", ans);
    return 0;
}
unsigned setbit(unsigned x, unsigned y, int n, int p)
{
    unsigned seton, lsp, ans0, ans1,ans2; 
    seton = ((~((~0) << n)) & y) << (p - n);
    lsp = x & ((~0) << p); 
    ans0 = x & lsp;
    ans1 = ans0 | seton;
    ans2 = ans1 + (x & (~((~0) << (p-n))));
    return ans2;
}
