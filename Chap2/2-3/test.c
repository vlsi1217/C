#include <stdio.h>

int htoi(char *s);

int main()
{
	printf("%d\n", htoi("9"));
	printf("%d\n", htoi("f"));
	printf("%d\n", htoi("A"));
	return 0;
}

int htoi(char *sg)
{
	int i, n, val;
	val = 0;
	i = 0;
	
	n = 0;	
	  if (sg[i] >= '0' && sg[i] <= '9' )
		n = (sg[i] - '0');
	  else if (sg[i] >= 'a' && sg[i] <= 'f')
		n = (sg[i] - 'a' + 10);
	  else if (sg[i] >= 'A' && sg[i] <= 'F')
	    n = (sg[i] - 'A' + 10);
	return n;
}

