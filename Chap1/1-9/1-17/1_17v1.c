/*K&R exe 1-17, print out the line which has more than 80 chars*/

/*Nme: Tony Z
Date: Oct 30, 2012
Time: 111:07
Place: King Lib*/

//pseudo code for the get lines and return longest line
/*
	while(there's another line){
		if(it's longer than the 80 char){
			(save it)
			(save its length)
			print it
		}
	}
*/


#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */
int getl(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
int main()
{
	int len,c; /* current line length */
	int max; /* maximum length seen so far */
	char line[MAXLINE]; /* current input line */
	char longest[MAXLINE]; /* longest line saved here */
	max = 0;

	while ((len = getl(line, MAXLINE)) > 0){
		if (len > 3) 
			printf("\nthe long lines are:\n %s", line);
	}
	return 0;
}

/* getline: read a line into s, return length */
int getl(char s[],int lim)
{
	int c, i;
	for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)  //second c is just the same as the former one
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}