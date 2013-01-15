
//step 1: include lib, define constant
//step 2: define called routine
/*step 3: define the main function{
		  1: create space for input
		  2: execute the algorithm{
				1: get length
				2: reverse
				3: printf
		  		}
		  3: return 0;
			}*/		  	
/*step 4: define each routine function{
		  1: declare variables
		  2: define function
		}*/		  

#include <stdio.h>
#define MAXLINE 1000

int getlength(char line[], int maxline);
void reverse(char line[]);   /*the important thing is the input parameter's type and return value type,
	           	     the name is only used to imply the meaning of each inputs*/

main()
{

	char line[MAXLINE];     //why create the line[] space here? not in routines?
	
	while (getlength(line, MAXLINE) != 0) {
		reverse(line);
		print("%s",line);
	}
	return 0;
}

//now, Tony is going to create these two routine modulars

int getlength(char s[], int lim)
{
	int c, i, j;
	
	j = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i){
		if(i < lim-2){
			s[j] = c;
			++j;	
		}
	}
	if (c == '\n') {
		s[j] = c;
		++j;
		++i;
	}	
	s[j] = '\0';
	return i;
}

void reverse(char s[])
{
	int i, j;
	char temp;

	i = 0;
	while (s[i] != '\0'){    //when do we use 'while','if','for'?
		++i;
	}
	--i;
	if (s[i] == '\n')
		--i;
	
	j = 0;
	while(j < i){
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		--i;
		++j;
	}
}
