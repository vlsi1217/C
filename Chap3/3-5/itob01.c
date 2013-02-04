/*
Time: 16:00 Feb 2, 2012
Addr: King Lib, Sunny
Engr: Tony Z
Proj: Exe 3-5: write a program itob(n,s,b) to convert int into b based form
*/

/*
Idea: 
1. 
*/

#include <stdio.h>
#include <string.h>
#include <limits.h>

void itob(int n, char s[], int b);
void reverse(char s[]);

int main()
{
    int num = INT_MIN;
    char str[40];
    int b = 16;
    printf("INTEGER: %d\n", num);
    itob(num, str, b);
    printf("STRING : %s\n", str);
    return 0;
}
int abs(int in)
{
	in = (in>=0)?in:(-in);
	return in;
}

void reverse(char s[])
{
	int i, j, temp;
	for(i=0, j=strlen(s)-1; i<j; i++,j--){
		temp=s[i], s[i]=s[j], s[j]=temp;
	}
}
void itob(int in, char s[], int b)
{
	int i, c, sign;
	// if((sign = in)<0){
	// 	in = -in;
	// }
	sign = in;
	i = 0;
	
	do
	{
		//c=0;
		c = abs(in/b);
		c= (c<9)?c+'0':c-10+'A';
		s[i++]= c;
	}//while((in/=b)!=0);
	while ((in/=b)!=0);
	if(sign<0){
		s[i++]='-';				
	}
	s[i]='\0';

	reverse(s);
}	

/*
//////////////
here is the output from my code
//////////////
jing@jing-laptop:~/KR-C/Chap3/3-4$ ./itoa02
INTEGER: -2147483648
STRING : -2147483648
*/
