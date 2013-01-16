#include <stdio.h>
int pt(int in);

int main()
{

	printf("%d\n", pt(0));
	printf("%d\n", pt(1));
	printf("%d\n", pt(4));
}

int pt(int index)
{
	int i, val;
	val = 1;
	i = index;
	if (i == 0)
		return val;
	else {
		while (i > 0){ 
		val = val * 10;
		--i;
		}
	}
	return val;
}

/*should return 
 1
 10
 10000
 */

