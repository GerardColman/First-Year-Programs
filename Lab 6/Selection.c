#include <stdio.h>


#define MAX_SIZE 5000

int main(void)
{
  int i, j, k, minindx, out;
  double a[MAX_SIZE];
  double tmp, min;
  FILE *fp;
  printf("Enter a value for k: \n");
      scanf("%d", &k);

  fp = fopen("floats.txt", "r");

  for (i = 0;i<MAX_SIZE;i++)
    {
      fscanf(fp, "%lf", &a[i]);
    }
  fclose(fp);
  /* Run the outer loop k times, each time around the outer loop
     the (j+1)st smallest value is found and placed in position j
     of the loop */

  for (j=0;j<k;j++){

      min = 99999;
      minindx=-2;

      /* the inner loop starts are i=j+1 i.e. it starts at
	 the next element of the array AFTER the position in which
	 the previous smallest value was placed. Therefore it finds
	 the next smallest value, excluding all values already found
	 and stored in a[0],...,a[j]
      */
            for (i = j;i<MAX_SIZE;i++){

          	  if (a[i]<min && a[i]>0.5){

          	      min = a[i];
          	      minindx = i;
          	    }
              if(minindx == -1){
                printf("There arent any values greater than 0.5");
                return 1;
              }

      	}
            /* swap a[j] and a[minindx] */
            tmp = a[j];
            a[j] = a[minindx];
            a[minindx] = tmp;
    }
        printf("The kth largest value after 0.5 in the array is %lf\n", a[k-1]);
  return 0;
}
