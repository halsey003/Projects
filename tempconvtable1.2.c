#include <stdio.h>

/* Print Celsius-Fahrenheit table for Celsius = -20, -10, 0, ..., 100 */
			/*Floating Point Version*/

main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = -20;		/* lower limit of temperature table */
	upper = 100;		/* upper limit of temperature table */
	step = 10;		/* step size */

	celsius = lower;
	printf("\tCelsius\t\tFahrenheit\n");
	while (celsius <= upper) {
		fahr = ((9.0 / 5.0) * celsius + 32.0);		
		printf("\t%4.0f\t\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
