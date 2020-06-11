/* Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0 */

#include <stdio.h>	/*For printf statment*/

void main( void )
{

	float far, cel;

	printf("\tCelsius\tFahrenheit\n");
	for( far = 300; far >= 0; far = far-20)
	{
		printf("\t%3.1f\t%6.1f\n",far,((5.0/9.0)*(far-32)) );
	}
}


