/*
exe1-14 for K&R C programming book as the C solution book
draw the HORIZONTAL histogram for the frequency of input characters
*/

/*NAME: Tony Z
Date: Oct 26, 2012
TIME: 18:40
Place: IEEE, SJSU
*/

#include <stdio.h>
#include <ctype.h>  //what is this?

#define MAXH 15
#define MAXC 128

int main(){

//declare variables
	int i, c, maxv, len;
	int ncc[MAXC];

//initialize variables
	for(i=0; i<MAXC; ++i){    //should start 0?
		ncc[i] = 0;
	}

//find char and count into count vectors
	while((c=getchar()) != EOF){
		if(c < MAXC)
			++ncc[c];
	}
//find the maxvalue of ncc[i] in order to normalize
	maxv = 0;
	for(i = 0; i < MAXC ; ++i){
		if(ncc[i] > maxv){
		maxv = ncc[i];	
		}
	}

//draw the normalized vectors in histogram
	for(i = 1; i < MAXC; ++i){
		if(isprint(i))  	// what is isprint???
			printf("%3d - %c - %3d : ", i, i, ncc[i]);    //why d/c/d???
 		else
 			printf("%3d - %3d : ", i, ncc[i]);

 	//then find the normalized length for ncc
 		if(ncc[i] > 0){
 			if((len = ncc[i] * MAXH / maxv) <= 0)
 				putchar('*');
 			else
 				;      //len has been normalized here, so don't do anything
 		}
 		else
 			len = 0;   //------need to initial len here!!!--------//

 	//draw the horizontal histogram
 		while (len > 0){
 			putchar('*');
 			--len;
 		}
 	putchar('\n');
 	}
 	return 0;
}
