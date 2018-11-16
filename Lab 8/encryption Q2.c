#include <stdio.h>
#define N 600
/*Made by Gerard Colman - 18327576.  Lab 8 Question 2.*/

int main(){
  /*Declaring variables*/
  char alpha_new[] = "qjczieaungsdfxmphybklortvw";
  char alpha_old[] = "abcdefghijklmnopqrstuvwxyz";
  char sent[N];
  printf("enter a string you would like to encrypt:\n");
      scanf("%[^\n]s", sent);
  int i,n,j;
  n=sizeof(sent);
  /*Encrypting the message*/
  for(i=0;i<n;i++){
    for(j=0;j<26;j++){
      if(sent[i] == alpha_old[j]){
        sent[i] = alpha_new[j];
        break;
      }
    }
  }
  /*Printing encryted message*/
  for(j=0;j<n;j++){
    if(sent[j] == '\0'){
      break;
    }
   printf("%c", sent[j]);
  }
  return 0;
}
