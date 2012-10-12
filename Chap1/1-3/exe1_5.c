/*Exercise 1-5*/

#include <stdio.h>

#define LOWER 0
#define HIGHER 300
#define STEP 10
main(){
    int C;
	for (C = HIGHER; C > LOWER; C = C - STEP)
		printf("C = %3d ==> F = %6.3f\n", C, (4.0/9.0)*(C-32));
	
	system("pause");return 0;
}
