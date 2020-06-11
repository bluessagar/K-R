/* Section 1.5.1 File Coping */

/* Copy input to output, Version 1 */

#include <stdio.h>

void main( void )
{
	int c = getchar();

	while( c != EOF )
	{
		putchar(c);
		c = getchar();
	}
	printf("\n End of the Program. \n");
}

