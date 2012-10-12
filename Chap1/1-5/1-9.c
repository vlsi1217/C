/* time: Oct 11, 2012
	Engineer: Heng Zhang
	description: K&R exe 1-9: program that copy input to output and modify the 
			continuous ' 's into 1 ' '*/
	
#include <stdio.h>
#define NONBLANK 'a'

main(){
	int c, lastc;
	
	lastc = NONBLANK;
	
	while ((c=getchar())!= EOF){
		if (c != ' ')
			putchar(c);
		if (c == ' ')	
			if (lastc != ' ')
		    	putchar(c);
			else ;   /*this means that when lastc is also blank, then
                       do nothing but finish this if loop.*/ 
		lastc = c;
		}
	return 0;
}
