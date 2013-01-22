/*
Time: 12am Jan 16, 2013
Addr: 32 Apt
Engr: Tony Z
Proj: Exe 2-5, write a function any (s1, s2) which returns the 1st location in a string s1 where any char from the string s2 occurs, or -1 for no char from s2
*/

/*
//1. I think is to use the squeeze-like method, to test s1 and s2, and store the temp for each char in both s1 and s2, then return 
   min value of temp;
2. Why don't we test the s1[i] to all s2[j] and return the 1st matched value. 
//3. What does the 1st location mean? the most front place or, the 1st location of 

example: 
s1 = "xtony8";
s2 = "nnnt"
any(s1, s2) = addr of 't'


*/

#include <stdio.h>
int any(char s1[], char s2[]);

int main()
{
	char *s1, *s2;
	int i;
	s1 = "xtony8";
	s2 = "nnnt";
	i = any(s1, s2);
	printf("%d\n", i);
	return 0; 
}

int any(char s1[], char s2[])
{
	int i, j, addr;
	for (i = 0, addr = -1; addr != -1 && s1[i] != '\0'; ++i){
	    for (j = 0; s1[i] != s2[j] && s2[j] != '\0'; ++j){
		;
	    if (s2[j] == s1[i])
		addr = i;
	    }
	}
	return addr;
}
