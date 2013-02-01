/*
Time: 17:20 Jan 31, 2012
Addr: King Lib, Cloudy
Engr: Tony Z
Proj: Exe 3-3: write a program to expand a-z, A-Z, 0-9, etc. into abced...z, ABCDE....Z and 012345...9, etc. Former are in S1, latter are in S2.
*/

/*
Idea: 
1. use swith
*/

#include <stdio.h>
void expand(char s1[], char s2[]);

int main()
{
    char str1[]     = "String expansion\na-z\nA-Z\n0-9\na-b-z\na-z0-9\n-a-z\na--z.\n";
    char str2[1000] = "";

    expand(str1, str2);

    printf("STRING 1\n%s", str1);
    printf("\nSTRING 2\n%s", str2);

    return 0;
}


void expand(char s1[], char s2[])
{
	int i, j, nm;
	nm = 0;
	for(i=0, j=0; s1[i]!='\0'; i++){
		if(s1[i]=='-' && s1[i-1] < s1[i+1]){
			nm++;
			if(nm==1){
				for(s2[j] = s1[i-1]; s2[j] < s1[i+1]; j++){
					s2[j]=s2[j] + 1;
				}
			}
			else if(nm>1){
				for(; s2[j] < s1[i+1]; i++)
					s2[j] = s2[j] ++;
			}
		}
		else
			s2[j++] = s1[i];
		}s2[j] = '\0';
}	
