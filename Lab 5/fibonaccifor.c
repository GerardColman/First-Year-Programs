#include <stdio.h>

int main(void){
  int r1,r2,n,out;
  printf("Enter a value for n: ");
    scanf("%d", &n);
  r1=0;
  r2=1;

  for(;out<=n;r1++){
    out=r1+r2;
    r1=r2;
    r2=out;
    printf("%d \n", out);
    r1--;
  }
return 0;
}
