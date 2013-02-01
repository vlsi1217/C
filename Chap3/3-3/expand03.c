/*
Time: 10:20 Feb 1, 2012
Addr: King Lib, Sunny
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
	printf("STRING 1\n%s", str1);
    expand(str1, str2);
    printf("\nSTRING 2\n%s", str2);

    return 0;
}


void expand(char s1[], char s2[])
{
	int i, j, nm;
	nm = 0;
	for(i=0, j=0; s1[i]!='\0'; i++){
		if(s1[i]=='-' && i>0 && s1[i-1] < s1[i+1]){
			for(s2[j-1] = s1[i-1]; s2[j-1] < s1[i+1]; j++){
				s2[j]=s2[j-1] + 1;
			}
		}else
			s2[j++] = s1[i];
	}s2[j] = '\0';
}	

/*
//////////////
here is the output from my code
//////////////
jing@jing-laptop:~/KR-C/Chap3/3-3$ ./expand02
STRING 1
String expansion
a-z
A-Z
0-9
a-b-z
a-z0-9
-a-z
a--z.

STRING 2
String expansion
abcdefghijklmnopqrstuvwxyzz
ABCDEFGHIJKLMNOPQRSTUVWXYZZ
01234567899
abbcdefghijklmnopqrstuvwxyzz
abcdefghijklmnopqrstuvwxyzz01234567899


 !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`aabcdefghijklmnopqrstuvwxyzz
a-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyzz.


*/