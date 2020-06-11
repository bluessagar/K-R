/* Section 1.5.1 File Coping */

/* Copy input to output, Version 1 */

#include <stdio.h>

void main( void )
{
	int c ;

	printf("Exercise 1.7: EOF = %d\n", EOF);

	printf("Exercise 1.6: getchar() != EOF %d \n", (getchar() != EOF ));

	c = getchar();

	while( c != EOF )
	{
		putchar(c);
		c = getchar();
	}

	printf("\n End of the Program. \n");
}

