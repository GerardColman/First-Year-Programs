#include <stdio.h>

int main(void){
  /*Declaring Variables*/
  int r1,r2,n,out;
  printf("Enter a value for n: ");
    scanf("%d", &n);
  r1=0;
  r2=1;

  while(out<=n){
    out=r1+r2;
    r1=r2;
    r2=out;
    printf("%d \n", out);
  }
return 0;
}
