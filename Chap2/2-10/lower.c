/*
Time: 24:40 Jan 22, 2013
addr: SJ apt
Engr: Tony Z
Proj: K&R Exe 2-10: rewrite bitcount function 
*/

/*
Idea: 
*/

#include <stdio.h>
char lower(char *s);

int main()
{
	int c;
	c = J;
    printf("%d\n", lower(s));
    return 0;
}

int lower(int c)
{
	//return (c >= 'A' && c <= 'Z'? c = c - 'A': c = c);  
	//My wrongs: not declare in ?: and c-'A' only calculate the 
	//           difference, not the real output, need to add 'a'         
	return c >= 'A' && c <= 'Z'? c - 'A' + 'a': c
}