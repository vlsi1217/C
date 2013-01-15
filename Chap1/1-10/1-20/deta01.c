/*Time: Dec 26, 2012
 Engineer: Tony Z
 Place: Menlo Park APT
 Project: K&R 1-20, write a program 'detab' that replaces tabs in the input
*/

/*idea:the meaning of tab/tabstop is the same as a format:
	     |________|________|________|________|
	     |Now__________is____the______time
             |Now\t__is____the_____time  

For those of you who don’t know, that ‘\t’ means “tab,” the pipes (“|”) represent tab stops, and the underscores are there because they’re easier to see than spaces. In other words, these programs simply find sequences of eight spaces and replaces them with tabs. It takes no notice of where the tab stops actually are.
     (http://dgoodmaniii.wordpress.com/2009/11/22/on-c-programming-and-k-rs-impossible-exercise-1-21/)

This explain is actually for 1-21.
*/

#include <stdio.h>

#define TABSIZE 8

int calsp(int postion, int tabsize);

main()
{
	int pos, c;
	//pos = 0;
	for (pos = 0; (getchar() = c) != EOF; ++pos){
	    if(c == '\t'){	
		 j = calsp(int pos, int TABSIZE);
		 while (j != 0){
			printf(' ');
			--j;
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
	space = tabsize - (pos - 1) % tabsize;
	return space;
}
