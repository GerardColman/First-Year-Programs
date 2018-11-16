#include <stdio.h>
#define N 100

int main(void){
  /*Declaring Variables*/
  char sent[N];
    fgets(sent, N, stdin);
  int i,j,space;
  j=0;
  space=1;
  /*Counting Whitespaces*/
  for(i=0;sent[i] != '\0';i++){
    if(sent[i] == ' '){
      space++;
      if(sent[i+1] == ' '){
        space--;
      }
    }
  }
  printf("The number of words is: %d", space);
  return 0;
}
