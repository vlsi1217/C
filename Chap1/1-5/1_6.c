#include <stdio.h>

main()
{
	int c;
	while (c = getchar()!=EOF)
		printf("%d haha \n", c);   /*don't know why there 
                                   is alway 1 more line*/
	printf("%d is @ EOF\n", c);
	
	return 0;
	system("pause");

	}
