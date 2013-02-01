#include <stdio.h>

void expand(char *s1, char *s2);

int main()
{
    char str1[]     = "String expansion\na-z\nA-Z\n0-9\na-b-z\na-z0-9\n-a-z\na--z.\n";
    char str2[1000] = "";

    expand(str1, str2);

    printf("STRING 1\n%s", str1);
    printf("\nSTRING 2\n%s", str2);

    return 0;
}

void expand(char *s1, char *s2)
{
	char c;
	int i, j;

	i=j=0;
	while((c=s1[i++])!='\0'){
		if (s1[i] == '-' && s1[i-1]<=c){
			i++;
			while(c < s1[i])
				s2[j++] = c++;
		}else 
			s2[j++] = c;
	}s2[j]='\0';
}

/*
////////////
here is the output from the KR-C solution
///////////
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
abcdefghijklmnopqrstuvwxyz
ABCDEFGHIJKLMNOPQRSTUVWXYZ
0123456789
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz0123456789


 !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz
-z.




*/
