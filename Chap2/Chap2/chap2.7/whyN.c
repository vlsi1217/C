#include <stdio.h>
int atoi(char line[]);

int main(void)
{
    int i;
    char s[];
 
    s = "185";
    i = atoi(s);     /* i = -9885 */
 
    printf("i = %d\n",i);
    return 0;
}

int atoi(char s[])
{
	int n, i;
	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}


/*******************  Output should be similar to:  ***************
 
i = 185
*/
