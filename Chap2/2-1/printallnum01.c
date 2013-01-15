/*
Time: 14:52 Jan 14, 2012
Addr: King Lib, Sunny day
Engi: Tony Z
Proj: Exe 2-1: Print all the numbers of unsigned and signed char, short and long 
*/

#include <stdio.h>

main()
{
	printf("signed char min = %d\n", (char)(((unsigned char)~0 >> 1) + 1));
	printf("signed char min = %d\n", -(char)(((unsigned char)~0 >> 1)));
	printf("Compute Range: %d\n", (char)((((unsigned char)(-1)) >> 1) + 1));
	
	printf("try to see see %d\n", (unsigned char)(-1));
	
	printf("signed char max = %d\n", (char)((unsigned char)~0 >> 1));
	printf("unsigned char max = %u\n", (unsigned `char)~0);
	
	return 0;
}
