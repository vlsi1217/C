/*
Time: 17:30 Jan 21, 2013
addr: 32 SJ apt
Engr: Tony Z
Proj: K&R Exe 2-7 
*/

/*
Idea: 
*/

#include <stdio.h>
int invert(int x,int p,int n);

int main()
{
    int num = 0xf5f;
    printf("%x\n", num);
    num = invert(num, 7, 4);
    printf("%x\n", num);
    return 0;    
}

int invert(int x, int p, int n)
{
    int mask1, mask2;
    int x0, x1;
    mask1 = ~(~(~0 << n) << (p-n+1)); //111111000011111
    x0 = x & mask1;       //xxxxxxx0000xxxxxx
    mask2 = ~(~0<<n);     //00000nnnn 
    x1 = (~x >> (p-n+1)) & mask2;
    return x0 | x1;
}
