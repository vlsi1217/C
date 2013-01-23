/*
Time: 15:45 Jan 22, 2013
addr: King Lib
Engr: Tony Z
Proj: K&R Exe 2-9: rewrite bitcount function 
*/

/*
Idea: x&(x-1)will delete the rightmost 1 bit, so count i, to see when x & (x-1) 
      will be 0 
*/

#include <stdio.h>

int bitcnt(unsigned x);

int main()
{
	int num;
    num = 0x0;
    printf("num = %x\n", num);
    num = bitcnt(num);
    printf("1bits = %d\n", num);
    return 0;
}

int bitcnt(unsigned x)
{
    int i;
    //notice: i should be 1, we assume input is positive, since 
    //        input = 0 or 1 will get same output: 0, 
    for (i = 0; x != 0; x &= (x-1))
    	i++;
    return i;
}

