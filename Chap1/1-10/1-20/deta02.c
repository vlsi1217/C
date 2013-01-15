/*Time: Dec 29, 2012
 Engineer: Tony Z
 Place: San Jose 32N12 APT
 Project: K&R 1-20, write a program 'detab' that replaces tabs in the input
*/

#include <stdio.h>
#define TABSIZE 8

int calsp(int postion, int tabsize);
int main()
{
	int pos, np, c;
	pos = 1;
	np = 0;
	//for (pos = 0; (getchar() = c) != EOF; ++pos){      //cannot use for here, since when the input is \n, 
	while ((c = getchar()) != EOF){													 //the pos should be redefine as 1 (the first addr of new line)
	    if(c == '\t'){	
		    np = calsp(pos, TABSIZE);
		 	while (np > 0){
				putchar(' ');
				++pos;   //when outputing ' ', the pos is incresing, BE CAREFUL of all variants and conditions
				--np;
		    	}	
	    }else if (c == '\n'){
			putchar(c);
			pos = 0;
	    }else{
			putchar(c);
	    	++pos;
        }
	}
}
int calsp(int pos, int tabsize)
{
	int space;
	space = 0;
	space = tabsize - (pos - 1) % tabsize;
	return space;
}




/*
ilovet	ony    J
ilovet   ony    J
*/