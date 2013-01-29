/*
Time: 22:40 Jan 28, 2012
Addr: King Lib, Cloudy
Engr: Tony Z
Proj: Exe 3-3: 
*/

/*
Idea: 
1. use switch
2. the output should be:

There are tabs		embedded in this sentence.  \As well as newlines

and one backspace.
There are tabs\t\tembedded in this sentence.  \\As well as newlines\n\nand one backspace.

*/

#include <stdio.h>
#define MAXL 1000

void esc(char s[], char t[]);   // this is a void function to copy t into s

int main()
{
  char sentence[] = "There are tabs\t\tembedded in this sentence.  \\As well as newlines\n\nand one \b backspace.";
  char new[MAXL];
// sentence[] is the t[], new[MAXL] is the s[]
  printf("%s\n", new);
  printf("%s\n", sentence);
  esc(new, sentence);
  printf("%s\n", new);
	return 0;
}

void esc(char s[], char t[])
{
	int i, j;
	for(i=j=0; t[i]!='\0'; i++)
		switch(t[i]){
			case '\t': 
				s[j++]='\\';
				s[j++]='t';
				break;
			case '\\':
				s[j++]='\\';
				s[j++]='\\';
				break;
			case '\n':
				s[j++]='\\';
				s[j++]='n';
				break;
			default:
				s[j++]=t[i];
		}
	s[j]='\0';
}


/*
What I learned:
1. escape sequence's size is one char;
2. about char new[]:
	first define it as new[] = "hello\\world";
	but when we use it, simply new.
3. about pointer, we use like this:
    first define it as: const char *h = "hello\nworld";
    then print specific char by printf("%c%c", h[5], h[1]);
*/