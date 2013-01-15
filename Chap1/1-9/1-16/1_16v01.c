/*
1-16: modify the main function in Chap 1.9 to make 
it output the length of any length input lines.
*/

/*
Author: Tony Z
Time: Oct 30, 2012     21:13
Place: King Library
*/


#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */
int getl(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
main()
{
	int len; /* current line length */
	int max; /* maximum length seen so far */
	char line[MAXLINE]; /* current input line */
	char longest[MAXLINE]; /* longest line saved here */
	max = 0;
	
	while ((len = getl(line, MAXLINE)) > 0)
		if (len > max) {
		max = len;
		copy(longest, line);
		}
	if(max > 0)
		printf("\n\n\nthe longest line is:\n %s \nmaxline # is %d\n", longest, max);
	return 0;
}

/* getline: read a line into s, return length */
int getl(char s[],int lim)
{
	int c, i;
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)  //second c is just the same as the former one
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