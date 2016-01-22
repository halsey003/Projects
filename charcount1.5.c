#include <stdio.h>

/* count characters in input */

/* to execute, type $ ./charcount1.5 < FILENAME.EXTENSION at a terminal */
/* note: $ FILENAME | ./charcount1.5 does not work anymore    */

main()
{

	double nc;
	
	for (nc = 0; getchar() != EOF; ++nc)
		;  /* this is a null statement */
	printf("There are %.0f characters in this file\n", nc);
}
