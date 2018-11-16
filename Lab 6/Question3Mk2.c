#include <stdio.h>

#define MAX_SIZE 10000
int main(){
  int a[MAX_SIZE],i,n,n2,j,x,y,c1,c2,c3,c4,c5,c6,c7,c8,c9,c0;
  /*Getting Array Length*/
  printf("Enter a value for n (Array Length)\n");
      scanf("%d", &n);
      n2 = (n/2) + 1;
  /*Getting Array Values*/
  printf("Please enter n numbers to enter into the array\n");
    for(j=0;j<n;j++){
      scanf("%d", &a[j]);
    }
    /*Printing the Array*/
  printf("Your Array is: ");
  for(i=0;i<n;i++){
    printf("%d, ", a[i]);
  }
    for(x=0;x<=(n/2);x++){
      if(a[x] == 0){
        c0++;
      }
      if(a[x] == 1){
        c1++;
      }
      if(a[x] == 2){
        c2++;
      }
      if(a[x] == 3){
        c3++;
      }
      if(a[x] == 4){
        c4++;
      }
      if(a[x] == 5){
        c5++;
      }
      if(a[x] == 6){
        c6++;
      }
      if(a[x] == 7){
        c7++;
      }
      if(a[x] == 8){
        c8++;
      }
      if(a[x] == 9){
        c9++;
      }
    }
    /*Printing The Answer*/
    if(c0>(n/2 +1)){
      printf("0 Appears");
      printf("%d Times \n", c0);
    }
    if(c1>(n/2 +1)){
      printf("1 Appears");
      printf("%d Times \n", c1);
    }
    if(c2>(n/2 +1)){
      printf("2 Appears");
      printf("%d Times \n", c2);
    }
    if(c3>(n/2 +1)){
      printf("3 Appears");
      printf("%d Times \n", c3);
    }
    if(c4>(n/2 +1)){
      printf("4 Appears");
      printf("%d Times \n", c4);
    }
    if(c5>(n/2 +1)){
      printf("5 Appears");
      printf("%d Times \n", c5);
    }
    if(c6>(n/2 +1)){
      printf("6 Appears");
      printf("%d Times \n", c6);
    }
    if(c7>(n/2 +1)){
      printf("7 Appears");
      printf("%d Times \n", c7);
    }
    if(c8>(n/2 +1)){
      printf("8 Appears");
      printf("%d Times \n", c8);
    }
    if(c9>(n/2 +1)){
      printf("9 Appears");
      printf("%d Times \n", c9);
    }
  return 0;
}
