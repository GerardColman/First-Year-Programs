 #include <stdio.h>
 #include <stdlib.h>

 #define N 500

 int main(void)
 {

   int n;  /* The number of lengths */
   int x=1555615; /* The target length */
   int lengths[N]; /* The array of available lengths */
   int i,j,w,m,k,l;


   FILE *fp;

   fp = fopen("textcase_small.txt", "r");
   fscanf(fp, "%d", &n);
       for (i=0;i<n;i++){
         fscanf(fp, "%d", &lengths[i]);
       }
   fclose(fp);

for(j=0;j<n;j++){
  w = x - lengths[j];
  for(m=0;m<n;m++){
    if(w - lengths[m] == 0){
      printf("%d = %d + %d",x,lengths[j],lengths[m]);
      return 0;
    }
  }
}
printf("Nothing adds up to x");
return 0;
}
