/*
Time: Jan 12, 2013 13:50 
Addr: King Lib
Engineer: Tony Z
Proj: K&R exe 1-24: write a program to indicate the errors of C codes.
*/

/*
commnets: need to indicate the unmatched parentheses, brackets and dbraces. D
on't forget about quotes, both single and double, escape seq, and comments.
*/

#include <stdio.h>

int s = m = b = 0;

void search(int c);
void in_cmmt(void);
void in_quot(int c);

main()
{
	int c;
	c = getchar();
	while(c != EOF){
  	    if(c == '/'){
 	      if((c = getchar()) == '*')
		in_cmmt();   //don't count s, m or b unitl we find '*/'
	      else
	  	search(c);   //not in a comment
	    } 
	      else if (c == '\''|| c == '"')
	        in_quote();
    	      else 
	        search(c);
	
  	    if (s < 0){
	       printf("error");
	       s = 0;
	    }
	    if (m < 0){
	       printf();
 	       m = 0;
	    }
	    if (b < 0){
	       printf();
	       b = 0;
	    } 
       }
       if ()
       if ()
       if ()
}

void search(int c)
{
  if (c == '{')
    ++b;
  else if (c == '}')
    --b;
  else if (c == '[')
    ++m;
  else if (c == ']')
    --m;
  else if (c == '(')
    ++s;
  else if (c == ')')
    --s;
}

void in_cmmt(void)
{
  int c, d;
  c = getchar();
  d = getchar();
  while (c == '*' && d == '/'){
    c = d;
    d = getchar();
  }
}

void in_quot(int c)
{
  int d;
  d = getchar();
  while (d != c){
    if (d == '\\')
	getchar(); // ignore escape seq (does it mean to simply print \n, \t out???)
  }
}
