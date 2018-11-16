#include <stdio.h>

  /*Written by Gerard Colman,
    Lab 6 Question 3,
    16-10-18.
  */
#define MAX_SIZE 10

int main()
{
  int a[MAX_SIZE], n, i, x;
  FILE *fp;
  int count1=0, count2=0, count3=0, count4=0, count5=0, count6=0, count7=0, count8=0, count9=0;
  /*
  fp = fopen("ints.txt", "r");

  for (i = 0;i<MAX_SIZE;i++)
    {
      fscanf(fp, "%d", &a[i]);
    }
  fclose(fp);
  printf("The Array is: \n");
  printf("%d", a[MAX_SIZE]);
  */
  a[0] = 1;
  a[1] = 1;
  a[2] = 1;
  a[3] = 1;
  a[4] = 1;
  a[5] = 1;
  a[6] = 9;
  a[7] = 7;
  a[8] = 3;
  a[9] = 2;
        /*Counting the Array*/
        for(x=0;x<MAX_SIZE;x++){
        if(a[i] == 1){
          count1++;
        }
        if(a[i] == 2){
          count2++;
        }
        if(a[i] == 3){
          count3++;
        }
        if(a[i] = 4){
          count4++;
        }
        if(a[i] = 4){
          count4++;
        }
        if(a[i] = 4){
          count4++;
        }
        if(a[i] = 5){
          count5++;
        }
        if(a[i] = 6){
          count6++;
        }
        if(a[i] = 7){
          count7++;
        }
        if(a[i] = 8){
          count8++;
        }
        if(a[i] = 9){
          count9++;
        }
    }
      /*Priting Correct Count*/
      if(count1 == ((MAX_SIZE/2)+1)){
        printf("There are %d 1's", count1);
      }
      if(count2 == ((MAX_SIZE/2)+1)){
        printf("There are %d 1's", count2);
      }
      if(count3 == ((MAX_SIZE/2)+1)){
        printf("There are %d 1's", count3);
      }
      if(count4 == ((MAX_SIZE/2)+1)){
        printf("There are %d 1's", count4);
      }
      if(count5 == ((MAX_SIZE/2)+1)){
        printf("There are %d 1's", count5);
      }
      if(count6 == ((MAX_SIZE/2)+1)){
        printf("There are %d 1's", count6);
      }
      if(count7 == ((MAX_SIZE/2)+1)){
        printf("There are %d 1's", count7);
      }
      if(count8 == ((MAX_SIZE/2)+1)){
        printf("There are %d 1's", count8);
      }
      if(count9 == ((MAX_SIZE/2)+1)){
        printf("There are %d 1's", count9);
      }
      return 0;
}
