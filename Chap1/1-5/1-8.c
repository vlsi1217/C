/* time: Oct 11, 2012
	Engineer: Heng Zhang
	description: K&R exe 1-8: count the # of blank, tab, enter*/

#include <stdio.h>

int main(){
	int c, nb, nt, nn;
	nb = 0;
	nt = 0;
	nn = 0;
	while((c = getchar())!=EOF){
		if (c == ' ')
			++nb;
		if (c == '\t')        /*I got wrong at first since I use '='
                              NOTICE: '==' is for logic calculation while
                              = is only for giving value*/
			++nt;
		if (c == '\n')
			++nn;
		}
	printf("%d %d %d\n", nb, nt, nn);
	
	//system("pause");return 0;
}
