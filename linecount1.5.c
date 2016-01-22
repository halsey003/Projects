#include <stdio.h>

/* count lines in input */

/* to execute, type $ ./linecount1.5 < FILENAME.EXTENSION at a terminal */
/* note: $ FILENAME | ./linecount1.5 does not work anymore    */

main()
{
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("There are %d lines in this file\n", nl);

}
