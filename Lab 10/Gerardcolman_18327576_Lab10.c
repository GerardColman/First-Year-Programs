#include <stdio.h>
#include <math.h>

#define N 500

double triangle(void);
double circle(void);
double currency(void);
double quadratic(void);
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
    triangle();
  }
  if(select == 2){
    circle();
  }
  if(select == 3){
    currency();
  }
  if(select == 4){
    quadratic();
  }
  if(select == 5){
    wordcount();
  }
}
/*Function Bodies*/
double triangle(void){
	double a,b;
    printf("Enter the base of the triangle\n");
      scanf("%lf", &a);
    printf("Enter the height of the triangle\n");
      scanf("%lf", &b);
	  double out;
	  out = (a*b)/2;
	  printf("The Size of the triangle is %lf", out);
	}
double circle(void){
	double a,b;
  	  double out;
      printf("Enter the radius of the circle\n");
      		scanf("%lf", &a);
	  out = 3.14159265359*a*a;
	  printf("The area of the circle is %lf", out);
}
double currency(void){
  double out;
  double a;
      printf("Enter the amount of EUR you would like to convert to GBP\n");
      scanf("%lf", &a);
  out = a*0.887813;
  printf("%lf EUR converts to %lf GBP", a,out);
}
double quadratic(void){
  double r1,r2;
  double a,b,c;
      printf("Enter the a of the quadratic equation\n");
      scanf("%lf", &a);
    printf("Enter the b of the quadratic equation\n");
      scanf("%lf", &b);
    printf("Enter the c of the quadratic equation\n");
      scanf("%lf", &c);
  r1 = -b + (sqrt(b*b - 4*a*c))/(2*a);
  r2 = -b - (sqrt(b*b - 4*a*c))/(2*a);
  printf("The roots of the equation are (%lf,%lf)", r1,r2);
}
int wordcount(void){
  int i,j,space;
  char sent[N];
    printf("Enter a sentence/string\n");
    fgets(sent,N,stdin); 
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
