#include <stdio.h>
#include <math.h>

int main(void){
int n,x,out;
out = 1;
printf("Enter a value for n: ");
  scanf("%d", &n);
    for(x=1;x<=n;x++){
      out=out*x;
    }
printf("n! = ");
printf("%d", out);
return 0;
}
