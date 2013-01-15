/*
Author: Tony Z
Time: Dec 2, 2012   18:13
Place: King Library
Project: K&R Chap 1 exe 1-19: design a 
		reverse function to reverse every input lines
*/


#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);   /*return the size of current line*/
void rcopy(char to[], from[]); 			 /*rcopy is reverse-copy from from[] to to[]*/

main(){
	int len;
	char line[MAXLINE];   //the current input

	len = 0;
	while((len = getline(line, MAXLINE)) != 0){
		copy(rev, line);
		len = 0;
		printf("%s", rev);
	}
	return 0;
}

int getline(char s[], int lim){
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) ! = EOF && c != '\n'; ++i){
		s[i] = c;
	}
	if (c == '\n'){
		s[i] = c;
	}
	return i;
}

int rcopy(char to[], char from[]){
	int i, l;

	i = 0;

	l = (len+1)/2;
	while (i <= (l-i){
		to[i] = from[l-i];
		++i;
	}	
}