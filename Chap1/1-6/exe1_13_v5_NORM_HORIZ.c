//K&R exe 1-13: print out a histogram of the lengths of words in its input
//Version 1 for the horizontal histogram
//------------------------------------------------------------
//Date: Oct 18, 2012 time: 17:30                              keep in good code style
//Engineer: TONY Z											  date, author, idea
//------------------------------------------------------------
//Idea: combine with the "WC" code and the array code*/

#include <stdio.h>

#define IN   1
#define OUT  0
#define MAXL 11  //max length size
#define MAXH 15  //max height of histogram


int main(){

//declare int
	int i, c, nc, nw, maxnum, overflow, state;   //maxnum save the most # of word length
	int nleng[MAXL];
	int len;
	//int j;

//initialization
	state = OUT;
	nc = nw = maxnum = overflow = len = 0;
	for (i=0; i<MAXL; ++i)   //only count the word with positive length
		nleng[i] = 0;

//find word and count each one
	while((c=getchar())!= EOF){ 		  //get into judge if c is not EOF
		if(c ==' '||c =='\t'||c =='\n'){  //find if c is white
			//if(state == IN){              //find the end of a word
				state = OUT;		      //change state at each start
				//++nw;				  //count the total words
				//++nleng[nc-'0'];        //I stucked here for 45 min---------------------------Stupid
				if(nc>0){
					if(nc<MAXL-1){
						++nleng[nc];		  //store nleng[i] when 0<i<10
						++nw;
					}else{
						++overflow;
						++nw;
					}	//store nleng[10] when nc >= 10
				}
				nc = 0;				      //finish a word, need to initialize nc and state
			}else if(state == OUT){    //find the first char in a new word
				state = IN;           //modify state at every start
				nc=1;
			}else					  //find the char in a existed word
				++nc;
			//state = OUT;
		}
//Improve the histogram by normalization
	maxnum = nleng[1];
	for (i=2; i<MAXL; ++i){
		if(maxnum < nleng[i])
			maxnum = nleng[i];
	}


//print out the histogram and info (improved): #of '*' = MAXH*(nleng[i]/maxnum)
	printf("new word # is %d: \n", nw);
	for (i=1; i<MAXL-1; ++i){
		printf("%d # is %d: ", i, nleng[i]);
	//for (i=1; i<MAXL; ++i){
		printf("nleng[%d]: ", i);
		//for(j=0;j<nleng[i];++i)
		/*while(nleng[i] > 0){
			putchar('*');
			--nleng[i];
			}putchar('\n');
			*/
		if(nleng[i]>0){
			if((len = nleng[i] * MAXH / maxnum) <= 0)
				len = 1;
		}else
			len = 0;
		while(len > 0){
					putchar('*');
					--len;
					}
		putchar('\n');
	}
	printf("overflow # = %d: ", overflow);
	/*while(overflow > 0){
		putchar('*');
		--overflow;
	}putchar('\n');
	*/
	return 0;
}





//for input, I used exe_13_v4.c
//the output is already normoalized with the MAXH of 15 '*'
new word # is 297: 
1 # is 33: nleng[1]: **********
2 # is 43: nleng[2]: **************
3 # is 46: nleng[3]: ***************
4 # is 40: nleng[4]: *************
5 # is 43: nleng[5]: **************
6 # is 17: nleng[6]: *****
7 # is 21: nleng[7]: ******
8 # is 11: nleng[8]: ***
9 # is 13: nleng[9]: ****
overflow # = 30: 