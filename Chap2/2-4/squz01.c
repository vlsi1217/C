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

int main()
{
	char *s1, *s2;
	s1 = "Tany";
	s2 = "a";
	squeeze(s1, s2);
	printf("%s\n and %s\n", s1, s2);
	return 0;
}

void squeeze(char s1[], char s2[])
{
	int i, j, k;
	j = k = 0;
	
	for (i = 0; s1[i] != '\0'; ++i){
	    for (j = 0; s2[j] != '\0'; ++j){
		  if (s1[i] == s2[j])
			;
		  else 
		    s1[k++] = s1[i];
	    }
	}
}
