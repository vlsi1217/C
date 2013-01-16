#include <stdio.h>
#include <string.h>
#include <math.h>
 
char hex[] = "0Xf7C";
int htoi( char s[] );
 
int main()
{
        int result;
        result = htoi(hex);
 
        printf("%s in hex is %d as an integer", hex, result);
 
return 0;
}
 
int htoi( char s[] )
{
        int i, p, result, decimal_equiv, break_at;
 
        p = result = 0;
        break_at = decimal_equiv = 0;
        if ( s[1] == 'x' || s[1] == 'X' )
                break_at = 2;
        else
                break_at = 0;
 
        for ( i=strlen(s) -1; i >= break_at ; --i) {
                if ( s[i] >= '0' && s[i] <= '9' ) {
                        decimal_equiv = s[i] - '0';
                }
                else if (s[i] <= 'f' && s[i] >= 'a') {
                        decimal_equiv = s[i] - 'a' + 10 ;
                }
                else if (s[i] <= 'F' && s[i] >= 'A') {
                        decimal_equiv = s[i] - 'A' + 10;
                }
                result += pow(16, p)*decimal_equiv;
                ++p;
        }
        return result;
}
