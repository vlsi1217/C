//K&R exe 1-13: print out a histogram of the lengths of words in its input
//Version 1 for the horizontal histogram
//------------------------------------------------------------
//Date: Oct 15, 2012                                          keep in good code style
//Engineer: TONY Z											  date, author, idea
//------------------------------------------------------------
//Idea: combine with the "WC" code and the array code*/

#include <stdio.h>

#define IN   1
#define OUT  0
#define MAXL 10

int main(){

//defi
	int i, c, nc, nw, len, state;
	int nleng[MAXL];
	//int j;
//initialization
	state = OUT;
	nc = nw = len = 0;
	//j = 0;
	for (i=0; i<MAXL; ++i)
		nleng[i] = 0;
//find word and count each one
	while((c=getchar())!= EOF){ 		  //get into judge if c is not EOF
		if(c ==' '||c =='\t'||c =='\n'){  //find if c is white
			if(state == IN){              //find the end of a word
				++nw;
				++nleng[nc];
				nc = 0;				      //finish a word, need to initialize nc and state
				state = OUT;              //after outputed nleng
			}
		}
		else if(state == OUT){    //find the first char in a new word
			nc=1;
			state = IN;
		}
		else{					  //find the char in a existed word
			++nc;
			//state = OUT;
		}
	}
	for(i=1; i < MAXL; ++i){
		printf("%2d-%2d", i, nleng[i]);

		while(nleng[i]>0){
			putchar('*');
			--nleng[i];
		}
		putchar('\n');
	}

	return 0;
}
	//print out the histogram and info
//	printf("new word # is %d\n", nw);
//for (i=0; i< MAXL; ++i)
//	printf("%d # is %d\n", i, nleng[i]);
/*	for (i=1; i<MAXL; ++i){
		printf("nleng[%d]: ", i);
		for(j=1;j<=nleng[i];++i)
			printf("*");
		printf("\n");
		}*/


