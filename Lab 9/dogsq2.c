#include <stdio.h>
#define N 200
int main(){
  char sent[N];
  int i,doggo;
  doggo = 0;
    fgets(sent,N,stdin);
  for(i=0;sent[i]!='\0';i++){
    if(sent[i] == 'd' || sent[i] == 'D'){
      if(sent[i+1] == 'o' || sent[i+1] == 'O'){
        if(sent[i+2] == 'g' || sent[i+2] == 'G'){
          if(sent[i+3] == 's' || sent[i+3] == 'S'){
            doggo++;
          }
        }
      }
    }
  }
  printf("Dogs appear %d times in the code", doggo);
  return 0;
}
