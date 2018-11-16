#include <stdio.h>
#include <math.h>

int main(){

 double a, p, r, n;
 char in;

 printf("Are interested in computing a,p,r or n? \n");
    scanf("%c", &in);

  if (in=='a'){
    printf("Please enter values for p,r and n \n");
        printf("Please enter starting principal (P):");
          scanf("%lf", &p);
        printf("Please enter interest rate per annum (r):");
          scanf("%lf", &r);
        printf("Please enter number of years (n):");
          scanf("%lf", &n);
    a = p*pow(1+(r/1000(12)), 12);
    printf("%lf", &a);
  }
return 0;
}
