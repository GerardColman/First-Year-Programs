#include <stdio.h>

int main(void){
int n,x,out;
printf("Enter a value for n: ");
    scanf("%d", &n);
x=1;
out=1;

    while(x<=n){
      out=out*x;
      x=x+1;
    }

printf("n! = %d", out);
return 0;
}
