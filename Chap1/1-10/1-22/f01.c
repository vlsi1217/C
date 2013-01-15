/*
Time: Dec 31, 2012
Place: SJ 32N12
Engineer: Tony Z
Project: K&R 1-22: write a program to fold long input lines into two or more shorter lines after the last non blank char that occurs before the n-th column of input.
*/

#include <stdio.h>

#define MAXL 10        /*NOTE: MAXL and TABS are two different parameters, for common sense, TABS < MAXL*/
#define TABS 8	

char line[MAXL];      //space for storing input line

void printl(int pos);  // print until the position
int exptab(int pos);    // expand tab into blanks
int findblnk(int pos); // find blank's postion
int newpos(int pos);   // rearrange line with new postition

int main()
{
	int c, pos;
	c = getchar();
	pos = 0;
	while (c != EOF){
	    line[pos] = c;
	    if (c == '\t'){
		pos = exptab(pos);	
	    }else if (c == '\n'){
		printl(pos);
		pos = 0;
	    }else if (++pos >= MAXL){ //NOTICE here, it used '++pos'
		pos = findblnk(pos);
		printl(pos);
		pos = newpos(pos);	
	    }
		
	}	
}

void printl(int pos)   
{
	int i;
	for (i = 0; i < pos; ++i)
		putchar(line[i]);
	if (pos > 0);
		putchar('\n');
		
}

int exptab(int pos)
{
	line[pos] = ' ';
	for (++pos; pos < MAXL  && (pos % TABS)!= 0; ++pos)    // pos % TABS != 0 is very important for TABS < 0.5 * MAXL
		line[pos] = ' ';
	if (pos < MAXL)
		return pos;
	else {
		printl[pos];
		return 0; //reset pos to be the 1st of new line
	}
}

int findblnk(int pos)
{
	while (pos < MAXL && line[pos] != ' ')
		--pos;
	if (pos == 0)
		return MAXL;
	else 
		return pos + 1;
}

int newpos(int pos)
{
	if (pos <= 0 || pos >= MAXL)
		return 0;
	else {
		i = 0;
		for (j = pos; j < MAXL; ++j){
			line[i] = line[j];
			++i;
		}
	     return i;
	     }
}
