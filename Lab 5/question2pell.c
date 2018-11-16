#include <stdio.h>

int main(void){
  /*Declaring Variables*/
  long long int p0,p1,n,out;
  printf("Enter a value for n: ");
    scanf("%lld", &n);
  p0=0;
  p1=1;
  out = 0;
  printf("%llf \n", p0);
  printf("%llf \n", p1);

  while(out<n){
    out = (2*p1)+p0;
    p0=p1;
    p1=out;
    printf("%lld \n", out);
  }
  return 0;
}
