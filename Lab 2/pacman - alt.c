#include <stdio.h>

int main ()
{
  int PcmX, PcmY, DestX, DestY, DiffX, DiffY;
  printf("Please enter Pac-mans X Coordinate: \n");
  scanf("%lf", &PcmX);
  printf("Please enter Pac-mans Y Coordinate: \n");
  scanf("%lf", &PcmY);
  printf("Pac-mans coordinate's are: \n");
  printf("(%d, ", PcmX);
  printf("%d)", PcmY);
  DestX = -5;
  DestY = -6;
  DiffX = DestX - PcmX;
  DiffY = DestY - PcmY;

    printf("The Distance between Pac-man and his destination is: ");
    printf("(%d, ", DiffX);
    printf("%d)\n", DiffY);

        if (DestX > PcmX) {
          while (DestX > PcmX){
              printf("Pac-Man moved right. \n");
              PcmX = PcmX + 1;
          }
        }
        else if (DestX < PcmX) {
            while (DestX < PcmX) {
              printf("Pac-man moved left. \n");
              PcmX = PcmX - 1;
          };
        }

        if (DestY > PcmY) {
          while (DestY > PcmY) {
              printf("Pac-man moved up, \n");
              PcmY = PcmY + 1;
          }
        }
        else if(DestY < PcmY) {
          while (DestY < PcmY) {
              printf("Pac-man moved down.\n");
              PcmY = PcmY - 1;
          }
        }
  printf("Pac-man has arrived at his destination, \n");
  printf("(%d,", PcmX);
  printf("%d) \n", PcmY);
  return 0;
}
