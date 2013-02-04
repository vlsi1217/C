/*
Time: 16:00 Feb 2, 2012
Addr: King Lib, Sunny
Engr: Tony Z
Proj: Exe 3-5: write a program itoa(n,s,b) to convert int to string with 
	minimun size of b.
*/

/*
Idea: 
1. 
*/

#include <stdio.h>
#include <string.h>
#include <limits.h>

void itoa(int in, char s[], int b);
void reverse(char s[]);

int main()
{
    //int num = INT_MIN;
    int num = -127;
    char str[40];
    int b = 16;
    printf("INTEGER: %d\n", num);
    itoa(num, str, b);
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
void itoa(int in, char s[], int b)
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
		////////////////////////////////////////c = abs(in/b);
		c = abs(in%10);
		c = (c<=9)?c+'0':c-10+'a';
		s[i++]= c;
	}//while((in/=b)!=0);
	while ((in/=10)!=0);
	if(sign<0){
		s[i++]='-';				
	}
	//if(i<+b)
	while(i<b)
		s[i++]='\\';
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
