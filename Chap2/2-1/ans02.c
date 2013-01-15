#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>

int main()
{
    printf("Variable limits from headers:\n");
    printf("signed char        [%d, %d]\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char      [%d, %d]\n", 0,         UCHAR_MAX);
    printf("char               [%d, %d]\n", CHAR_MIN,  CHAR_MAX);
    printf("short int          [%d, %d]\n", SHRT_MIN,  SHRT_MAX);
    printf("unsigned short     [%d, %d]\n", 0,         USHRT_MAX);
    printf("int                [%d, %d]\n", INT_MIN,   INT_MAX);
    printf("unsigned int       [%d, %u]\n", 0,         UINT_MAX);
    printf("long int           [%d, %d]\n", LONG_MIN,  LONG_MAX);
    printf("unsigned long      [%d, %u]\n", 0,         ULONG_MAX);
}

