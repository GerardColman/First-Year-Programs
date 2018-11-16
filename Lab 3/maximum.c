#include <stdio.h>

int main(void){
  int a,b,c;
  printf("Enter 3 values: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

printf("The largest value is ");
      if (a > b && a > c){
        printf("%d", a);
      }
      if (b > c && b > a){
        printf("%d", b);
      }
      if (c > b && c > a){
        printf("%d", c);
      }
      if (a == b){
        printf("%d", a);
      }
      if (a == c){
        printf("%d", a);
      }
      if (b == c){
        printf("%d", b);
      }
      else if (a = b&&b = c){
        printf("b");
      }
return 0;
}
