#include <stdio.h>

#define IN 1	/* inside a word */
#define OUT 0	/* outside a word */

/* counts lines, words, and characters in input */

/* to execute, type $ ./wordcount1.5 < FILENAME.EXTENSION at a terminal */
/* note: $ FILENAME | ./wordcount1.5 does not work anymore    */

main()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("There are %d lines, %d words, and %d charactes in this file\n", nl, nw, nc);
}
