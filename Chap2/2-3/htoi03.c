/*
Time: 1:32am Jan 16, 2012
Addr: King Lib, Sunny day
Engi: Tony Z
Proj: exe 2-3, a function to converts a string of hex into int value 
*/

/*
since s[] start from the left to the right, in order to use s[i]*(16^(size-i)), or do the reverse first.

But, according to the solution book, there is another direct algorithm to calculate which is:
say, for decimal: 529 = ((5*10+2)*10)+9
or , for heximal: 529 = ((5*16+2)*16)+9
*/

#include <stdio.h>

int htoi(char string[]);

int main()
{
	int i = 0;
	char *s;
	s = "123";
	i = htoi(s);
	printf("%d and %s\n", i, s);
	return 0;
}

int htoi(char sg[])
{
	int i, n, flag, hex;
	hex = 0;
	flag = 1;  //important to use a flag to denote when to stop adding
	n = 0;
	for (i = 0; flag == 1; ++i){
	  /*
	  n = 0;   originally, I initialize n in the for loop!
	  So I got 0 all the time, since for loop will start from n=0
	  every time, so n will never be added up
	  */
	  if (sg[i] >= '0' && sg[i] <= '9' )
		hex = sg[i] - '0';
	  else if (sg[i] >= 'a' && sg[i] <= 'f')
		hex = sg[i] - 'a' + 10;
	  else if (sg[i] >= 'A' && sg[i] <= 'F')
	    hex = sg[i] - 'A' + 10;
	  else
	    flag = 0;
	  
	  if (flag == 1)
		n = n * 16 + hex;  /*This is the KEY part of algorithm to get rid
		of reverse the original string. read the analysis in the front of 
		the code*/
	}return n;
}

