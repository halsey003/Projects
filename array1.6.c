#include <stdio.h>

/* count digits, white space, others */

/* to execute, type $ ./array1.6 < FILENAME.EXTENSION at a terminal */
/* note: $ FILENAME | ./array1.6 does not work anymore    */

main()
{
	int c, i, nwhite, nother;
	int ndigit[10];				/*declares ndigit as an array of 10 integers*/

	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];	/*not sure why " -'0' " is needed*/
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;

	printf("digits =");
	for (i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);
	printf(", white space = %d, other = %d\n",
		nwhite, nother);
}
