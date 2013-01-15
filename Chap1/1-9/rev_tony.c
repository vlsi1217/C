/*
Author: Tony Z
Time: Dec 13, 2012   19:13
Place: Starbuck, Menlo Park
Project: K&R Chap 1 exe 1-19: design a 
		reverse function to reverse every input lines
*/


#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);   /*return the size of current line*/
void reverse(char s[]); 			 /*reverse*/

main(){

	char line[MAXLINE];   //the current input

	while((len = getline(line, MAXLINE)) != 0){
		reverse(line);
		printf("%s", rev);
	}
	return 0;
}

int getline(char s[], int lim){
	int c, i, j;   /*i is the index for the length of input line
				   j is the index for the length fit into s[] */

	j = 0;
	for(i = 0; (c = getchar()) != EOF && c != '\n'; ++i){
		if(i < lim - 2){           /*the reason is that s[lim-2] = '\0'
										s[lim-1] = '\n'*/
		s[j] = c; 
		++j;					
	}
	if(c == '\n'){
		s[j] = c;
		++j;
		++i;
	}
	s[j] = '\0'
	return i;
}

void reverse(char s[]){
	int i, j;                     /*find the end of input: i 
								  and the first of output: j*/
	char temp;

	i = 0;
	while (s[i] != '\0')          /*why not read the length of input? like:
								int reverse(char s[], int i) and 
							use my method: only 1 parameter: int((i+1)/2)*/
		++i;
	--i;
	if (s[i] == '\n')
		--i;
	j = 0;
	while (j < i){
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		--i;
		++j;
	}	
}


/*Comment: I got stuck in the error: 
rev01.c:13: error: conflicting types for ‘getline’
/usr/include/stdio.h:651: note: previous declaration of ‘getline’ was here
rev01.c:49: error: conflicting types for ‘getline’
/usr/include/stdio.h:651: note: previous declaration of ‘getline’ was here

after 1 hr, I found answer from Stackflow (http://www.dreamincode.net/forums/topic/259901-help-with-error-conflicting-types-for-getline/): 
	in C99, getline is a builtin function in <stdio.h>, so I have to rename the getline
	to getlin, so as to get rid off the error!!!
*/