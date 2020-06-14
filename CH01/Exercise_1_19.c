/* Write a function myreverse( s ) that revesres the character string s. Use it to write a program that reveres its input a line a time. */

/* Include files */
#include <stdio.h>	/* For the usage of printf library function */

/* Defines */
#define MAX_LEN	1000

/* Function declerations */
int myreverse( char s[] );	/* Function takes input a string and return it in the same string reversed.*/	

/* Function definations */
int main( void )
{
	char line[MAX_LEN];
	int c, i = 0;

	printf("\nWrite a function myreverse( s ) that revesres the character string s. Use it to write a program that reveres its input a line a time.");
	printf("\nEnter you input: ");

	while( (c = getchar() ) != EOF )
	{
		if( c  != '\n' )
		{
			line[i] = c;
			++i;
		}
		else
		{
			line[i] = '\0';		
			myreverse( line  );
			printf("%s\n", line);
			i = 0;
		}
	}
}

int myreverse( char s[] )
{
	int len = 0;
	char temp;
	
	for( len = 0; (len < MAX_LEN) && (s[len] != '\0') ; len++ );

	int j = len;
	for( int i = 0 ; i < len/2 ; ++i,--j  )
	{
		temp = s[j-1];
		s[j-1] = s[i];
		s[i] = temp;
	}

	return(0);
}


