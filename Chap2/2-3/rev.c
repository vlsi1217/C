#include <stdio.h>

//int htoi(char string[]);
//int power(int index);
char inverse(char string[]);

int main()
{
	int i = 0;
	char *s;
	s = "f00";
	i = inverse(s);
	printf("%d and %s\n", i, s);
	return 0;
}

char inverse(char string[])
{
	int i, j;
	j = 0;
	char ;
	for (i = 0; string[i] != '\0'; ++i)
	while (j < i){
	 rev[j] = string[i];
	 ++j;
	}
	return rev;
}
