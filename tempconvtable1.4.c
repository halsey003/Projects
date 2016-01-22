#include <stdio.h>

#define	LOWER	0	/* lower limit of table */
#define	UPPER	300	/* upper limit */
#define	STEP	20	/* step size */

/* Print Fahrenheit-Celsius table using the For statement */

main()
{
	int fahr;

	printf("\tFahrenheit\tCelsius\n");

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("\t%4d\t\t%6.1f\n", fahr, (5.0 / 9.0)*(fahr-32));
}
