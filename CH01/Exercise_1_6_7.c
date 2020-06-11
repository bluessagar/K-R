/* Section 1.5.1 File Coping */

/* Copy input to output, Version 1 */

#include <stdio.h>

void main( void )
{
	int c ;
	printf("\nEnter your string, it will be re-printed. Press Ctrl+D for EOF.\n");
	while( (c = getchar()) != EOF )
		putchar(c);

	printf("Exercise 1.6: getchar() != EOF %d \n", (getchar() != EOF ));
	printf("Exercise 1.7: EOF = %d\n", EOF);
}

