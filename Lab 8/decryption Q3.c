#include <stdio.h>

#define N 500
int main(){
  char alpha_encry[] = "qjczieaungsdfxmphybklortvw";
  char alpha_norm[] = "abcdefghijklmnopqrstuvwxyz";
  char sent[] = "uiddm";
  int i,j,n;
  n = sizeof(sent);

  for(i=0;i<n;i++){
    for(j=0;j<26;j++){
      if(sent[i] == alpha_encry[j]){
        sent[i] = alpha_norm[j];
        break;
      }
    }
  }
  for(j=0;j<n;j++){
    if(sent[j] == '\0'){
      break;
    }
   printf("%c", sent[j]);
  }
  return 0;
}
