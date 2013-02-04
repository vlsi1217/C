/*
Time: 16:20 Feb 1, 2012
Addr: King Lib, Sunny
Engr: Tony Z
Proj: Exe 3-4: write a program itoa to convert int into string, why INT-MIN 
	  doesn't work in the given example
*/

/*
Idea: 
1. still use the do...while since it will get out put of single '0' out;
2. since |INT_MIN|, say in 8bit system, it is equal to 128, while INT_MAX=127;
3. the soution is to use abs() instead of n=-n. 
*/

#include <stdio.h>
#include <string.h>
#include <limits.h>

int abs(int in);
void itoa(int n, char s[]);
void reverse(char s[]);

int main()
{
    int num = INT_MIN;
    char str[10];
    
    printf("INTEGER: %d\n", num);
    itoa(num, str);
    printf("STRING : %s\n", str);
    return 0;
}


// int abs(int in)
// {
// 	if(in<0)
// 		return -in;
// 	else
// 		return in;
// }
void reverse(char s[])
{
	int i, j, temp;
	for(i=0, j=strlen(s)-1; i<j; i++,j--){
		temp=s[i], s[i]=s[j], s[j]=temp;
	}
}
void itoa(int in, char s[])
{
	int i, sign;
	i = 0;
	//long long int num=in;
	if((sign = in)<0){
		in = -in;
	}

	do{
		s[i++] = in%10 + '0';
	}while((in/=10)!=0);
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
jing@jing-laptop:~/KR-C/Chap3/3-4$ ./itoa01
INTEGER: -2147483648
STRING : -./,),(-*,(
//////////////
Because there is no space to fit 128, the MAX_INT is 127;
but we can do Module

*/
