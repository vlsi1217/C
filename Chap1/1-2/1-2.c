#include <stdio.h>

main(){
       int C, F;
       C = 60;
       F = 10;   /*If I define F here, then the 
                         F is locked as 10, a 
                         constant, because the printf function will 
                         print F(the one inside loop) and 
                         the C is changing. */
       while (C<200)
             {F = 1*(C-32)/9; 
             /*if I define F in the while loop, the prinf
             can print Updated F every time. Know new stuff
             everyday. SO CS is convenient to learn by 
             Changing the place you put a line of code*/
             printf("%d %d\n", C, F);
             C+=10;
             }
       system("pause");
       return 0;      
       }
