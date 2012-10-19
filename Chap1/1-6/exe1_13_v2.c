//K&R exe 1-13: print out a histogram of the lengths of words in its input
//Version 2 for the horizontal histogram
//------------------------------------------------------------
//Date: Oct 18, 2012                                          keep in good code style
//Engineer: TONY Z											  date, author, idea
//------------------------------------------------------------
//Idea: combine with the "WC" code and the array code*/

#include <stdio.h>

#define IN   1
#define OUT  0
#define MAXL 10  //max length size
#define MAXH 15  //max height of histogram


int main(){

//declare int
	int i, c, nc, nw, maxnum, overflow, state;   //maxnum save the most # of word length
	int nleng[MAXL];
	//int j;

//initialization
	state = OUT;
	nc = nw = maxnum = overflow = 0;
	for (i=1; i<=MAXL; ++i)   //only count the word with positive length
		nleng[i] = 0;

//find word and count each one
	while((c=getchar())!= EOF){ 		  //get into judge if c is not EOF
		if(c ==' '||c =='\t'||c =='\n'){  //find if c is white
			if(state == IN){              //find the end of a word
				state = OUT;		      //change state at each start
				++nw;					  //count the total words
				//++nleng[nc-'0'];        //I stucked here for 45 min---------------------------Stupid
				if(nc<MAXL)
					++nleng[nc];		  //store nleng[i] when 0<i<10
				else
					++nleng[10];		  //store nleng[10] when nc >= 10
				//nc = 0;				      //finish a word, need to initialize nc and state
			}else if(state == OUT){    //find the first char in a new word
				state = IN;           //modify state at every start
				nc=1;
			}else					  //find the char in a existed word
				++nc;
			//state = OUT;
		}
	}
//Improve the histogram by normalization



//print out the histogram and info
	printf("new word # is %d\n", nw);
	for (i=1; i<=MAXL; ++i)
		printf("%d # is %d\n", i, nleng[i]);
	for (i=1; i<=MAXL; ++i){
		printf("nleng[%d]: ", i);
		//for(j=0;j<nleng[i];++i)
		while(nleng[i] > 0){
			printf("*");
			--nleng[i];
		}
	putchar('\n');
	}
	return 0;
}
