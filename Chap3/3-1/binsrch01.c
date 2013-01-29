/*
Time: 15:52 Jan 14, 2012
Addr: King Lib, Cloudy
Engr: Tony Z
Proj: Exe 3-1: Print all the numbers of unsigned and signed char, short and long 
*/

/*
Idea: 
1. for the testing of running time, use Matlab to generate a 1*10k sorted array 
   so as to compare these two methods.
2. the idea to use less test in loop is to test outside:


*/

#include <stdio.h>
int binsrch(int x, int v[], int n);

int main()
{
	char s[20];
	s[20] = '0 ';
	printf("%d\n", binsrch(x, s, n));
	return 0;
}

int binsrch(int x, int v[], int n)
{
	int low, high, mid;
	low = 0;
	hight = n - 1;
    mid = (low + high) / 2;
    	
    while (low < high && x != v[mid]{
    	if (x < v[mid])
   			high = mid - 1;
   		else 
   			low = mid + 1;
   		
   		mid = (low + high) / 2;
   	}	
   	if (x == v[mid])
   		return mid;
   	else
   		return -1;
}