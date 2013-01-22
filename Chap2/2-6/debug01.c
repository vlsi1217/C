#include <stdio.h>
//int setbit(int x, int y, int n, int p);

int main()
{
	int n = 4;
	int p = 7;
	int num ;//= 0xfff;
	//num = (~(~0)<<n)<<(p-n+1);
    num = ~((~0)<<n) << (p-n+1);
    
    printf("num = 0x%x\n", num);
    return 0;
}
