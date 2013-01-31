/*
Time: 14:20 Jan 31, 2012
Addr: King Lib, Cloudy
Engr: Tony Z
Proj: Chap 3.5: Shell sorting 
*/

/*
Idea: 
1. Keep loop contro. centralized is advantage when therew are several nest loops.
*/

#include <stdio.h>
void shell(int v[], int n);

int main()
{
	//const char s[] = {74, 32, 16, 88, 41, 71, 27, 9};
	int incs[16] = { 1391376, 463792, 198768, 86961, 33936,
                     13776, 4592, 1968, 861, 336, 
                     112, 48, 21, 7, 3, 1 };
	 //  S[0] = '34';
  // S[1] = '14';
  // S[2] = '42';
  // S[3] = '99';
  // S[4] = '7';
  // S[5] = '66';
  // S[6] = '45';
  // S[7] = '17';
  shell(incs, 8);
  printf("%d\n", incs);
}

void shell(int v[], int n)
{
	int i, j, temp, gap;
	for(gap = n/2; gap > 0; gap/=2)
		for(i = gap; i < n; i++)
			for(j = i-gap; j >= 0 && v[j] > v[j+gap]; j-=gap){
				temp = v[j], v[j] = v[j+gap], v[j+gap] = temp;
			}
}
