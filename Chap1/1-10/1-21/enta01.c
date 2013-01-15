/*
Time: Dec 29, 2012
Place: SJ 32N12
Engineer: Tony Z
Project: K&R 1-21: replaces string s of blanks by the min # of tabs and blanks to get same 
	 			   spacing 
*/

//solution: http://stackoverflow.com/questions/3020031/kr-exercise-1-21-mental-incomprehension

#include <stdio.h>

int main()
{
	int nt=0; nb=0; pos;
	int c = getchar();
	for (pos = 0; c != EOF; ++pos){
		if (c == ' '){
			if (pos % TABSIZE != 0)
				++nb;
			else{
				nb = 0;
				++nt;
			    }
		}else{
			for (; nt > 0; --nt)
				putchar('\t');
			if (c == '\t'){
				nb = 0;		
			}else{
				for (; nb > 0; --nb)
					putchar(' ');
			}
			putchar(c);
			if (c == '\n')
				pos = 0;        //in order to use the outtest for loop, the pos is set to 0 so as to get ++pos => 1 
			else if (c == '\t')
				pos = pos + (TABSIZE - (pos - 1)%TABSIZE) - 1;

		}
	}

}
