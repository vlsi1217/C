/*
Time: 15:10 Jan 31, 2012
Addr: King Lib, Cloudy
Engr: Tony Z
Proj: Chap 3.5: Shell sorting 
*/

/*
Idea: 
1. Keep loop contro. centralized is advantage when therew are several nest loops.
2. the 'char **ar' is learnd from: http://rosettacode.org/wiki/Sorting_algorithms/Shell_sort#C
*/

#include <stdio.h>
void shell(int v[], int n);
int main (int ac, char **av) {
    int a[] = { 1391376, 463792, 198768, 86961, 33936,
                     13776, 4592, 1968, 861, 336, 
                     112, 48, 21, 7, 3, 1 };
    int n = sizeof a / sizeof a[0];
    shell(a, n);
    int i;

    for(i=0;i< n;i++)
        printf("%d  ",a[i]);
    
    return 0;
} 

void shell(int *a, int n) {
    int h, i, j, k;
    for (h = n; h /= 2;) {
        for (i = h; i < n; i++) {
            k = a[i];
            for (j = i; j >= h && k < a[j - h]; j -= h) {
                a[j] = a[j - h];
            }
            a[j] = k;
        }
    }
}
 

