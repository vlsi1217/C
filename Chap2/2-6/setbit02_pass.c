/*
Time: 17:30 Jan 21, 2013
addr: 32 SJ apt
Engr: Tony Z
Proj: K&R Exe 2-6, set the n bits begin at position p of x, to the rightmost n bits of y 
*/

/*
Idea: should use bitwise arithmetic operations, alike the examples showed in Chap 2.9
Example: n = 4, p = 7;
setbit(0xFFF, 7, 4, 0xFFF5) => 0xF5F

so I will need 2 masks:
mask 1 to make the x[p] to x[p-n+1] = 0000000;
mask 2 to getbit of last n bits of y

The solution book has good example on making mask
*/


#include <stdio.h>
int setbit(int x, int y, int n, int p);

int main()
{
	int num = 0xFFF;
    printf("num = 0x%x\n", num);
	
    num = setbit(num, 0xFFF5, 4, 7);
    printf("num = 0x%x\n", num);
    return 0;
}

int setbit(int x, int y, int n, int p)
{
   int mask1, mask2;

   mask1 = ~(~(~0<<n) << (p-n+1));     //1110000001111;
   x &= mask1;                     //xxx000000xxxx;
   mask2 = ~(~0<<n);			       //0000001111111;
   y &= mask2;                     //000000yyyyyyy;
   y = y << (p-n+1);                 //000yyyyyy0000;
   return x | y;
}

