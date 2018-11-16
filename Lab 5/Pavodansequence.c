#include <stdio.h>
#include <math.h>

int main(void){

int p1,p2,p3,out;
int n,i;
printf("Enter the value for n:");
    scanf("%d", &n);
p1 = 1;
p2 = 1;
p3 = 1;
out = 0;
printf("%d \n", p1);
printf("%d \n", p2);
printf("%d \n", p3);
    for(int i=0;i<(n+1);i++){
      out = p2 + p1;
      printf("%d \n", out);
      p1=p2;
      p2=p3;
      p3=out;
    }
return 0;
}
