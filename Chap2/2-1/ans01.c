#include <stdio.h>
#include <string.h>
#include <limits.h>
union Float {
    float fa;
    unsigned char f[4];
}f;
union Double {
    double da;
    unsigned char d[8];
}d;
int main ()
{
    printf("The size of \"char\" is %d, its range is [%d, %d].\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("Compute Range: [%d, %d].\n", (char)((((unsigned char)(-1)) >> 1) + 1), ((unsigned char)(-1)) >> 1);
    printf("The size of \"short\" is %d, its range is [%d, %d].\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("Compute Range: [%d, %d].\n", (short)((((unsigned short)(-1)) >> 1) + 1), ((unsigned short)(-1)) >> 1);
    printf("The size of \"int\" is %d, its range is [%d, %d].\n", sizeof(int), INT_MIN, INT_MAX);
    printf("Compute Range: [%d, %d].\n", (int)((((unsigned int)(-1)) >> 1) + 1), ((unsigned int)(-1)) >> 1);
    printf("The size of \"long\" is %d, its range is [%d, %d].\n", sizeof(long), LONG_MIN, LONG_MAX);
    printf("Compute Range: [%d, %d].\n", (long)((((unsigned long)(-1)) >> 1) + 1), ((unsigned long)(-1)) >> 1);
    printf("-----------------------------------------------------\n");
    printf("The size of \"unsigned char\" is %d, its range is [0, %d].\n", sizeof(unsigned char), UCHAR_MAX);
    printf("Compute Range: [0, %d].\n", (unsigned char)(-1));
    printf("The size of \"unsigned short\" is %d, its range is [0, %d].\n", sizeof(unsigned short), USHRT_MAX);
    printf("Compute Range: [0, %d].\n", (unsigned short)(-1));
    printf("The size of \"unsigned int\" is %d, its range is [0, %u].\n", sizeof(unsigned int), UINT_MAX);
    printf("Compute Range: [0, %u].\n", (unsigned int)(-1));
    printf("The size of \"unsigned long\" is %d, its range is [0, %u].\n", sizeof(unsigned long), ULONG_MAX);
    printf("Compute Range: [0, %u].\n", (unsigned long)(-1));
    printf("-----------------------------------------------------\n");
    memset(f.f, 0xff, sizeof(f.f));
    f.f[3] = f.f[2] = 0x7f;
    printf("The maximum of \"float\" is : %e\n", f.fa);
    memset(d.d, 0xff, sizeof(d.d));
    d.d[6] = 0xef;
    d.d[7] = 0x7f;
    printf("The maximum of \"double\" is : %e\n", d.da);
    return 0;
}
