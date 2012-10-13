/* time: Oct 12, 2012
	Engineer: Heng Zhang
	description: K&R exe 1-12: program that output word in each line*/

#include <stdio.h>

#define IN  1  //this is the flag to define the state IN
#define OUT 0  //this is the flag to define the state OUT

/*count lines, words and the character in input*/

main(){
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF){
		if (c == ' '||c == '\n'||c == '\t'){
			if(state == IN){
				state = OUT; 
				printf("\n");		//in the end of a word, so change state and printf \n;
			}						
		}
		else if (state == OUT){
			state = IN;				//found the first char of a new word
			putchar(c);
		}
		else 						//(state == IN)&&(c is a char) 
			putchar(c);				//found the char in a word which is not the 1st one
	}
	printf("%d %d\n", nl, nw);
	
	return 0;
	system("pause");
}