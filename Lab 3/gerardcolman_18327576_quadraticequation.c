#include <stdio.h>
#include <math.h>

int main (void){
  /*Declaring Variables*/
  double a, b, c;
  double r1, r2;
  printf("Enter a value for a: \n");
    scanf("%lf", &a);
  printf("Enter a value for b: \n");
    scanf("%lf", &b);
  printf("Enter a value for c: \n");
    scanf("%lf", &c);

    double b2 = b*b;
    double a2 = 4*a*c;

  r1 = -b + (sqrt(b2 - a2)) /(2*a);
  r2 = -b - (sqrt(b2 - a2)) /(2*a);

if ((b2 - a2) < 0){
  printf("This equation has imaginary roots since B^2 - 4*a*c is < 0");
}
if (a == 0){
  printf("You cannot divide by 0\n");
}
  printf("The roots of the equation are: ");
  printf("(%f, ", r1);
  printf("%f)", r2);
  return 0;
}
