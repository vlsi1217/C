/*
Time: 17:39 Jan 16, 2013
Addr: King 8 floor
Engr: Tony Z
Proj: K&R Exe 2-4, modify code of Squeeze(s1, s2) to delete the matched chars of both two strings
*/

/*
Idea: pin s1[i], compare with s2[j], j++; after s2[j] == '\n', i++ until s1[i] == '\n'
*/

#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main()          //seems "segmentation fault" error depends on inputs?
{
    char s1[] = "Time to put the squeeze on!\n";
    char s2[] = "ez ut";

    printf("%s  pre\n", s1);
    squeeze(s1,s2);
    printf("%s  current", s1);
}

void squeeze(char s1[], char s2[])
{
	int i, j, k;
	
	for (i = k = 0; s1[i] != '\0'; i++){
	    for (j = 0; s1[i] != s2[j] && s2[j] != '\0'; j++)
			;
	    if (s2[j] == '\0') 
	     s1[k++] = s1[i];
	}
	//s1[i] = '\0';   
	s1[k] = '\0';
}
