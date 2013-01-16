/*
Time: 17:32 Jan 15, 2012
Addr: King Lib, Sunny day
Engi: Tony Z
Proj: exe 2-3, a function to converts a string of hex into int value 
*/

#include <stdio.h>

int htoi(char string[]);

int main()
{
	int i = 0;
	char *s;
	s = "f00";
	i = htoi(s);
	printf("%d and %s\n", i, s);
	return 0;
}

int power(int index)
{
	int i, val;
	val = 1;
	i = index;
	if (i == 0)
		return val;
	else {
	  while (i > 0){ 
	    val = val * 16;
	    --i;
	  }
	}return val;
}

int htoi(char sg[])
{
	int i, n, val, flag, hex;
	val = hex = 0;
	flag = 1;
	for (i = 0; sg[i] != '\0'; ++i){
	  n = 0;	
	  if (sg[i] >= '0' && sg[i] <= '9' )
		hex = (sg[i] - '0');
	  else if (sg[i] >= 'a' && sg[i] <= 'f')
		hex = (sg[i] - 'a' + 10);
	  else if (sg[i] >= 'A' && sg[i] <= 'F')
	    hex = (sg[i] - 'A' + 10);
	  //else
	    //flag = 0;
	  n = hex*power(i);
	
	  if (sg[i] != '\0')
		val = val + n;
	}return val;
}

