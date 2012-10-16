/* time: Oct 12, 2012
	Engineer: Heng Zhang
	description: K&R 1-6: program that count white, digits and others */

#include <stdio.h>

/*count digits, white space and others in input*/

main(){
	int c, i, nwhite, nother;
	int ndigit[10];		//define an array of 10 digits

	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((c = getchar()) != EOF){
		if (c == ' '||c == '\n'||c == '\t')
			++nwhite;		//in the end of a word, so change state and printf \n;						
		else if (c >= '0'&&c <= '9') //got terminated for several time and I found I used || here!!!!
			++ndigit[c - '0'];		//found the first char of a new word
		else 						//(state == IN)&&(c is a char) 
			++nother;				//found the char in a word which is not the 1st one
	}
	for (i = 0; i < 10; ++i)
		printf("%d", ndigit[i]);
	printf("%d %d\n", nwhite, nother);
	
	return 0;
	system("pause");
}
