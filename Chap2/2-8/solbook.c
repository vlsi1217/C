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
The input is 0xf5f but I got 0xf00000f5 as output
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
    for (i = 1; (v = v>>1)>0; i++)
	;
    return i;
}
int ritrot(int x, int n)
{
    int sz(void);
    int rbit;
    while (n-- > 0){
	rbit = (x & 1)<< (sz() - 1);
        x = x >> 1;
	x = x | rbit;
    }
    return x;
}        
