#include <stdio.h>
#include <math.h>
/*REMEMBER TO COMPILE WITH "-LM" TO LINK IN THE MATH LIBRARY.*/
main() 
{
char z;
long double a, b, c, x, y;
printf( "\033[H\033[J" );  /*this command is specifically for *nix systems - remove for increased portability*/
printf("Welcome!  This program is designed to calculate the X value(s) of a quadratic   equation.  To proceed, follow the instructions below.\n");
main_sub1: {
puts("Please enter three coefficients: ");
scanf("%Lf", &a);
scanf("%Lf", &b);
scanf("%Lf", &c);
x = ((-b) + sqrt ((b * b) - (4 * a * c))) / (2 * a);
y = ((-b) - sqrt ((b * b) - (4 * a * c))) / (2 * a);
	if ( (1.01*((-b) + sqrt ((b * b) - (4 * a * c)) / (2 * a) )) >= x >= (0.99*((-b) + sqrt ((b * b) - (4 * a * c)) / (2 * a) )) ) {
		printf("X has a value of %Lf \n", x);
	}
	else if ( (1.01*((-b) + sqrt ((b * b) - (4 * a * c)) / (2 * a) )) <= x <= (0.99*((-b) + sqrt ((b * b) - (4 * a * c)) / (2 * a) ))) {
		printf("Math Error: X = %Lf \n", x);
	}
	else { 
		printf("Program Error \n");  
	}
printf("and / or \n");
	if ( (1.01*((-b) - sqrt ((b * b) - (4 * a * c)) / (2 * a) )) >= y >= (0.99*((-b) - sqrt ((b * b) - (4 * a * c)) / (2 * a) )) ) {
		printf("X has a value of %Lf \n", y);
	}
	else if ( (1.01*((-b) - sqrt ((b * b) - (4 * a * c)) / (2 * a) )) <= y <= (0.99*((-b) - sqrt ((b * b) - (4 * a * c)) / (2 * a) ))) {
		printf("Math Error: X = %Lf \n", y);
	}
	else { 
		printf("Program Error \n");  
	}
}
printf("Do you want to run this program again? Y/N\n");
getchar();
scanf("%c", &z);
if (z == 'Y' ) {
 goto main_sub1;
}
else if (z != 'Y' ) { 
return 0;
}
}
