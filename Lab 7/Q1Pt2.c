#include <stdio.h>
#include <stdlib.h>

int main(void){
  
  int n;  /* The number of lengths */
  int x; /* The target length */
  int *lengths; /* The array of available lengths */
  int i,j,m,w;
  
  FILE *fp;

  fp = fopen("textcase_large.txt", "r");

  fscanf(fp, "%d", &x);
  fscanf(fp, "%d", &n);

  /* create the lengths array dynamically. 
     We haven't covered this yet. It is enough to
     know that after the execution of the statement
     below, lengths is now just like an ordinary
     int array of size n */
  lengths = (int *)malloc(sizeof(int)*n);
  if (!lengths)
    {
      printf("ERROR: Insufficient memory for lenghts array.\n");
      return -1;
    }

  for (i=0;i<n;i++)
    fscanf(fp, "%d", &lengths[i]);
  

  fclose(fp);

  /* Now all the input data has been read in 
     search for the required pair of lengths... */
for(j=0;j<n;j++){
  w = x - lengths[j];
  for(m=0;m<n;m++){
  printf("%d\n", m);
    if(w - lengths[m] == 0){
      printf("%d = %d + %d",x,lengths[j],lengths[m]);
      return 0;
    }
  }
}


  /* finished work, so free up the dynamic array 
     This should be done whenever dynamic allocation
     is used.
   */
  free(lengths);
  return 0;

}

  