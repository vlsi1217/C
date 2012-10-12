/* time: Oct 11, 2012
	Engineer: Heng Zhang
	description: K&R 1.5.2: count the # of char*/
	
#include <stdio.h>
main(){
	//long nc;
//	nc = 0;
//	while (getchar()!=EOF)
//		++nc;
//	printf("%ld\n", nc);
//	return 0;
//	system("pause");       This "while" is version 1;

   double nc;
   for (nc = 0; getchar()!='1'; ++nc)    /*the '1' means 1 is a flag of 
                                         return count number of Char*/
       ;               /*due to the function of FOR, there should be one
                       line in the loop, but I had done all I need to do 
                       in the for(*) so I can leave it as a blank*/
   printf("%.0f\n", nc);
   	//return 0;
	system("pause");  
}
