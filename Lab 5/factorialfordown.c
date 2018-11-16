#include <stdio.h>

int main(void){
  /*Declaring Variables*/
int x,n,out;
printf("Enter a value for n: ");
    scanf("%d", &n);
  out=1;
/*Factorial Code*/
    for(x=n;x<=n && x!=0;x--){
      out=out*x;
    }
  printf("n! = ");
  printf("%d", out);
return 0;
}
