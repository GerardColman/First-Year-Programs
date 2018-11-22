#include <stdio.h>
#include <math.h>

#define N 500

double triangle(double *x,double *y);
double circle(double *x);
double currency(double *x);
double quadratic(double *x,double *y,double *z);
int wordcount(void);



int main(void){
  double a,b,c;
  int select,i;
  char input[N];
  /*Getting user choice*/
  printf("Enter 1 to get the area of a triangle\n");
  printf("Enter 2 to get the area of a circle\n");
  printf("Enter 3 to convert EUR to GBP\n");
  printf("Enter 4 to get the roots of a quadratic equation\n");
  printf("Enter 5 to get the length of a string\n");
    scanf("%d", &select);
  /*Function Selection*/
  if(select == 1){
    printf("Enter the base of the triangle\n");
      scanf("%lf", &a);
    printf("Enter the height of the triangle\n");
      scanf("%lf", &b);
    triangle(a,b);
  }
  if(select == 2){
    printf("Enter the radius of the circle\n");
      scanf("%lf", &a);
    circle(a);
  }
  if(select == 3){
    printf("Enter the amount of EUR you would like to convert to GBP\n");
      scanf("%lf", &a);
    currency(a);
  }
  if(select == 4){
    printf("Enter the a of the quadratic equation\n");
      scanf("%lf", &a);
    printf("Enter the b of the quadratic equation\n");
      scanf("%lf", &b);
    printf("Enter the c of the quadratic equation\n");
      scanf("%lf", &c);
    quadratic(a,b,c);
  }
  if(select == 5){
    wordcount();
  }
}
/*Function Bodies*/
double triangle(double *x,double *y){
  double out;
  out = (x*y)/2;
  printf("The Size of the triangle is %lf", out);
}
double circle(double *x){
  double out;
  out = 3.14159265359*x*x;
  printf("The area of the circle is %lf", out);
}
double currency(double *x){
  double out;
  out = x*0.887813;
  printf("%lf EUR converts to %lf GBP", x,out);
}
double quadratic(double x,double y,double z){
  double r1,r2;
  r1 = -y + (sqrt(y*y - 4*x*z))/(2*x);
  r2 = -y - (sqrt(y*y - 4*x*z))/(2*x);
  printf("The roots of the equation are (%lf,%lf)", r1,r2);
}
int wordcount(){
  int i,j,space;
  char sent[N];
    printf("Enter a sentence/string\n");
    fgets(sent,N,stdin);
  j=0;
  space=1;
  /*Counting Whitespaces*/
  for(i=0;sent[i] != '\0';i++){
    if(sent[i] == ' '){
      space++;
      if(sent[i+1] == ' '){
        space--;
      }
    }
  }
  printf("The number of words is: %d", space);
}
