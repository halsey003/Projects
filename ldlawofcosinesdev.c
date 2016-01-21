#include <stdio.h>
#include <math.h>
/*REMEMBER TO COMPILE WITH "-LM" TO LINK IN THE MATH LIBRARY.*/
main()
{
  long double a, b, c, pi, degrees, radians, sum;
pi = M_PI;
  printf( "\033[H\033[J" );
/*this command is specifically for *nix systems - remove for increased portability*/
  printf( "Welcome! This program is designed to calculate the third side of a triangle     using the Law of Cosines, given that the other two sides and the enclosed angle are known.  To proceed, follow the instructions below.\n");
  puts("Please enter the two known sides: ");
  scanf("%Lf", &a);
  scanf("%Lf", &b);
  puts("Please enter the enclosed angle (in degrees): ");
  scanf("%Lf", &degrees);
radians = (degrees*(pi/180));
  sum = ((a*a)+(b*b)-(2*a*b*cos(radians)));
  c = sqrt((a*a)+(b*b)-(2*a*b*cos(radians)));
  if ((c == (sqrt(sum))) && (sum == ((a*a)+(b*b)-(2*a*b*cos(radians)))) ) {
      printf("The third side equals the square root of %Lf which is ~%Lf. \n", sum, c);
    }
  else if ((c != (sqrt(sum))) || (sum != ((a*a)+(b*b)-(2*a*b*cos(radians)))) ){
      printf("Math Error: C^2 = %Lf and C = %Lf \n", sum, c);
    }
  else {
    printf("Program Error \n");
}
return 0;
}
