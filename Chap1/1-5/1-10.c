/* time: Oct 11, 2012
	Engineer: Heng Zhang
	description: K&R exe 1-10: program that copy input to output and show
	the tab, blank and \ '*/

#include <stdio.h>

main(){
	int c;

	while ((c=getchar())!=EOF)
		{
		if (c == '\t')
			printf("\\t");
		else if (c == '\\')
			printf("\\\\");
		else if (c == '\b')
			printf("\\b");
		else if (c == ' ')
			printf("BL");
		else
            putchar(c);
		}
	return 0;
}
