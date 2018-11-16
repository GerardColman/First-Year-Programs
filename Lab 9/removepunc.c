#include <stdio.h>

#define N 200
int main(void){
  /*Declaring Variables*/
  char sent_in[N], sent_out[N];
  int i,j;
  fgets(sent_in,N,stdin);
  /*Sorting out*/
  for(i=0;sent_in[i]!='\0';i++){
    if(sent_in[i]<33 && sent_in[i]>47){
      sent_out[i] = sent_in[i];
    }
  }
  /*Printing the output*/
  for(j=0;sent_out[i]!='\0';j++){
    printf("%c", sent_out[i]);
  }
  return 0;
}
