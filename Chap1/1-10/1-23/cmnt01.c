/*
Time: Jan 11, 2013 17:20
Addr: 12th SJ Apt
Engineer: Tony Z
Proj: K&R Exe 1-23: write a program to delete comments
*/

#include <stdio.h>

void rcomment(int c);
void incomment(void);
void 

main()
{
	int c, d;
	c = getchar();
	while (c != EOF)
	  rcommnet(c);
	return 0;	
}

void rcomment(int c);
{
	int d;
	if (c = '/'){
	  if (d = getchar() == '*'){
  	    incomment();
	  }
	  else if (d == '/')
	    putchar(c);
	    recomment(d);
    	  }
	  else
	    putchar(c);
	    putchar(d);
	}else if (c == '\'' && c == '"'){
	   echo(d);
	 }else 
putchar(c);
}

void incomment(void) //don't putchar stuff in comment by finding '*/'
{
	int c, d;
	c = getchar();
	d = getchar();
	while (c != '*' || d != '/'){
	  c = d;
	  d = getchar();
	}
}

void echo(int c)
{
	int d;
	d = getchar();
	while (d != c ){
	  putchar(d);
	if (d == '\\')
	  putchar(getchar());
	}
}
