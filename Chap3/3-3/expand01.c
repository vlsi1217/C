/*
Time: 17:20 Jan 24, 2012
Addr: King Lib, Cloudy
Engr: Tony Z
Proj: Exe 3-3: 
*/

/*
Idea: 
1. use swith
*/

#include <stdio.h>
int esc(int s, int t);

int main()
{
  int s, t;
  char sentence[] = "There are tabs\t\tembedded in this sentence.  \\As well as newlines\n\nand one \b backspace.";
  char new[1000];

  s = esc(s,t);
  printf("%x\n", s));
	return 0;
}

int esc(int s, int t)
{
}
