#include <stdio.h>

#define N 500
int main(void){
  /*Declaring Variables*/
  int a[N],n; /*Array 1 & Length*/
  int i,j,k,w,l,c; /*For Loop Counters*/

  printf("Enter a value for n (<500)\n");
  scanf("%d", &n);
/*Filling The Array*/
  for(i=0;i<n;i++){
    a[i] = i+2;
  }
/*Filtering Prime Numbers*/
  for(j=0;j<n;j++){
  	for(k=0;k<n;k++){
  		if(a[k]%a[j]==0){
  			for(c=k+1;c<n;c++){
  				a[k] = a[c];
  			}
  			n--;
  		}
  	}
  }
/*Printing Prime Numbers*/
printf("All the prime numbers between 0 and n are:\n");
	for(w=0;w<n;w++){
	  printf("%d \n", a[w]);
	}
return 0;
}