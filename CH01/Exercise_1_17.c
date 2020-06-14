/* Write a program to print ALL input lines that are longer than 80 characters.*/

/* Include files */
#include <stdio.h>	/* For the usage of printf library function */

/* Pre-processor defines */
#define	MAX_LEN		1000
#define CHAR_LIMIT	80

/* Function declerations */
int mygetline(char line[], int maxline);

/* Function Definations */
int main( void )
{
	printf("\nWrite a program to print all input lines that are longer than 80 characters.");

	int len = 0;
	char line[MAX_LEN];

	while( (len = mygetline(line, MAX_LEN)) > 0 )
	{
		if( len > CHAR_LIMIT )
		{
			printf("\nLINE with more than 80 characters: %s",line);
		}
	}
	return( 0 );
}

/* Function to read the line from standerd input. maximum string size needs to be passed. Return actual string received.*/ 
int mygetline(char s[], int lim)
{
	int i ,c;

	for( i = 0; (i < lim-1) && ((c = getchar() ) != EOF) && (c != '\n'); ++i )
	{
		s[i] = c;
	}

	if( c == '\n' )
	{
		s[i] = c;
		++i;
	}

	s[i] = '\0';

	return(i);
}


