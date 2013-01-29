/*
Time: 17:20 Jan 14, 2012
Addr: King Lib, Cloudy
Engr: Tony Z
Proj: Exe 3-2: write a function escape(s,t) to convert escape sequence into visible 
      sequence, also, copies the string t into s (s is a string space);
*/

/*
Idea: 
1. use swith
*/

#include <stdio.h>
int esc(int s, int t);
int getlength(int s);

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
  //int s, c, t, i, j, ls, lt;
  // ls = getlength(s);
  // lt = getlength(t);
  int i, j;
  for (i = j = 0; t[j]!= '\0'; j++){
    switch (t[j]){
      case '\n':
        s[i++] = '\\';
        s[i++] = 'n';
        break;
      case '\t':
        s[i++] = '\\';
        s[i++] = 't';
        break;
      default:
        s[i++] = t[j];
        break;
    }
  }
  s[i] = '\0';
}