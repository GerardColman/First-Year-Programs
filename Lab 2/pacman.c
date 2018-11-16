
#include <stdio.h>
void Go(int steps);
int main(void){
  int sx, sy, dx, dy;
  int DiffX, DiffY;
    sx = 4;
    sy = 1;
    dx = 3;
    dy = 5;
    DiffX = dx - sx;
    DiffY = dy - dx;

  if (DiffX > 0 && DiffY > 0) {
    printf("R");
    Go(DiffX);
    printf("R");
    Go(DiffY);
  }
  if (DiffX > 0 && DiffY < 0){
    printf("L");
    Go(-DiffX);
    printf("L");
    Go(DiffY);
  }
  if (DiffX < 0 && DiffY > 0){
    printf ("L ") ;
    Go(-DiffX) ;
    printf ("L ") ;
    Go(DiffY);
  }
  if (DiffX < 0 && DiffY < 0){
    printf("L");
    Go(-DiffX);
    printf("R");
    Go(-DiffY);
  }
  printf("\n");
  return 0;
}
void Go(int steps){
  int i;
  for (i=0;i<steps;i++){
    printf("W");
  }
}
