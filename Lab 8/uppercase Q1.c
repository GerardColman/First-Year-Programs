#include <stdio.h>
#define N 500
int main(){
/*Defining Variables*/
	char lower[] = "Im so confused.";
	int n,i,j;
	n=sizeof(lower);
/*Array*/
	for(i=0;i<n;i++){
		if(lower[i]>=97 && lower[i]<=122){
			lower[i] = lower[i] - 32;
		}
	}
	for(j=0;j<n;j++){
		printf("%c", lower[j]);
	}
return 0;
}
