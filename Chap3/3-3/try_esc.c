#include <stdio.h>

int main()
{
   /*char *s = "0123\1\t6";
   printf("%c", s[0]);
   printf("%c", s[1]);
   printf("%c", s[2]);
   printf("%c", s[3]);
   printf("%c", s[4]);
   printf("%c", s[5]);
   printf("%c", s[6]);
   */
   const char *h = "hello\\\\\\\world";
   printf("%c%c", h[5], h[1]);

   return 0;
}

