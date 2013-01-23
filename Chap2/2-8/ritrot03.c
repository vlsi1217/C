/*
Time: 14:00 Jan 22, 2013
addr: King Lib
Engr: Tony Z
Proj: K&R Exe 2-8:rotate feedback result 
*/

/*
Idea: It is modified from the SOlution book:
1. Need to use sz to find the size of the word length of current hosting computer;
2. ritrot is depend on the relation of 'sz' and n; 
*/

/*
The input is 0xff5 but I got 0xf00000f5 as output;
need the output to be 0x5ff

Now, there is compile error: 
gcc -Wall -o "ritrot03" "ritrot03.c" (in directory: /home/jing/KR-C/Chap2/2-8)
ritrot03.c: In function ‘ritrot’:
ritrot03.c:46: error: subscripted value is neither array nor pointer
Compilation failed.

*/

#include <stdio.h>
int ritrot(int x, int n);
int sz(void);

int main()
{
    int num = 0xf5f;
    printf("%x\n", num);
    num = ritrot(num, 4);
    printf("%x\n", num);
    return 0;
}
int sz(void)
{
    int i;
    unsigned v = (unsigned)~0;
    for (i = 0; (v = v>>1)>0; i++)
	;
    return i;
}
int ritrot(char x, int n)
{
    int a, b;
    int i;
    n &= sz();
    a = x>>n;
    //b = (x & ~(~0 << n))<<(sz() -n+1);  
    for(i = sz(); x[i]!=0; i--)
	;
    b = (x& ~(~0 << n))<<(i-n+1);
    return a | b;
}                                                                         


