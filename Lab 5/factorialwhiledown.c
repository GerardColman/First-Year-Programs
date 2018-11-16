#include <stdio.h>
#include <math.h>

int main(void){
int n,x,out;
printf("Enter a value for n: ");
scanf("%d", &n);
x=n;
out=1;
    while (x<=n && x!=0){
      out=out*x;
      x=x-1;
    }
printf("n!=");
printf("%d", out);
return 0;
}
