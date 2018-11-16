#include <stdio.h>
#include <math.h>

int main(){
  int n, num, x, a[32],i=0;
  printf("Enter the number you'd like converted to binary:\n");
      scanf("%d", &n);
  num = n;
  while((num) != 0 ){
      if (num%2==1){
        a[i]= 1;
      }
      else {
        a[i]= 0;
      }
        num = num/2;
        i++;

  }
  printf("f i = %d \n",i );
  for(i--;i>=0;i--){
    printf("%d", a[i]);
  }
return 0;
}
