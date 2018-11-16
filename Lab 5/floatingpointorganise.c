#include <stdio.h>

int main(void){

  float w,x,y,z,new;
  int a,b;
  float list[4];

  printf("Enter the first value:");
      scanf("%f", &w);
      list[1] = w;
  printf("Enter the second value:");
      scanf("%f", &x);
      list[2] = x;
  printf("Enter the third value:");
      scanf("%f", &y);
      list[3] = y;
  printf("Enter the fourth value:");
      scanf("%f", &z);
      list[4] = z;

      for(a=1;a<5;a++){
        for(b=a;b<5;b++){
          if(list[a]<list[b]){
            new = list[b];
            list[b] = list[a];
            list[a] = new;
          }
        }
      }
printf("%f,%f,%f,%f", list[1],list[2],list[3],list[4]);
return 0;
}
