/*K&R exe 1.18, code a program to output every unblank line and
delete the trailing ' ' && '\t'*/

/*Nme: Tony Z
Date: Oct 30, 2012
Time: 11:28
Place: King Lib*/

//pseudo code for the get lines and return longest line
/*
	getl(,) to store a line in an array s[], and return the length i,
	function(,) to delete blank and tab from the s[len] and return a new length;
	if new length is zero
*/

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */
int getl(char line[], int maxline);
int remove(char to[], char from[]);

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

int remove(char to[], char from[]){
	int i;
	for(){
		if(){
			
		}
	}

	return i;  //return the new length
}