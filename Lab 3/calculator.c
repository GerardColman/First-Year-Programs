#include <stdio.h>
#include <math.h>

int main(void){
  /*Declaring Variables*/
int x,y,ans;
char op;

printf("Enter a value: \n");
    scanf("%d", &x);
printf("Enter an operator: \n");
    scanf(" %c", &op);
printf("Enter another value: \n");
    scanf("%d", &y);

/*Mathematical Functions*/

if (op == '+'){
  ans = x + y;
}
else if (op == '-'){
  ans = x - y;
}
if (op == '*'){
  ans = x * y;
}
else if (op == '/'){
  if (op == '/' && y == 0){
    printf("You cannot divide by 0");
  }
  ans = x / y;
}
/*printing the answer*/
printf("%d", x);
printf("%c", op);
printf("%d", y);
printf("=");
printf("%d", ans);
return 0;
}
