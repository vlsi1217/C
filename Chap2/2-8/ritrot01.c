/*
Time: 17:30 Jan 21, 2013
addr: 32 SJ apt
Engr: Tony Z
Proj: K&R Exe 2-8:rotate feedback result 
*/

/*
Idea: 
*/

#include <stdio.h>
int ritrot(int x, int n);

int main()
{
    int num = 0xf5f;
    printf("%x\n", num);
    num = invert(num, 4);
    printf("%x\n", num);
    return 0;    
}

int invert(int x, int n)
{
    int mask1, mask2;
    int x0, x1;
 
    return x0 | x1;
}
