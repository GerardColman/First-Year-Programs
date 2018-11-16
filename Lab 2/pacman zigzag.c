#include <stdio.h>

int main(void){
  int pcmx, pcmy, destx, desty;
      pcmx = 1;
      pcmy = 1;
      destx = -5;
      desty = -5;
  /*Top Right Quadrant */
if (destx > 0 && desty > 0){
       if (destx != pcmx && desty != pcmy){
        while (destx != pcmx && desty != pcmy){
          printf("Up, ");
          printf("Right \n");
          pcmx = pcmx + 1;
          pcmy = pcmy + 1;
        }
      }
      if (destx = pcmx && desty > pcmy){
        while (desty != pcmy){
          printf("Up \n");
          pcmy = pcmy + 1;
        }
       }
     if (destx = pcmx && desty < pcmy){
         while (desty != pcmy){
           printf("Down \n");
           pcmy = pcmy - 1;
        }
       }
     if (desty = pcmy && destx > pcmx){
         while (destx != pcmx){
           printf("Left \n");
           pcmx = pcmx + 1;
         }
      }
     if (desty = pcmy && destx < pcmx){
       while (destx != pcmx){
         printf("Right\n");
         pcmx = pcmx - 1;
       }
      }
}
/*Bottom Right Quadrant */
if (destx > 0 && desty < 0){
    if (destx != pcmx && desty != pcmy){
      while(destx != pcmx && desty != pcmy){
        printf("Right,");
        printf("Down\n");
        pcmx = pcmx + 1;
        pcmy = pcmy - 1;
      }
    }
    if (destx = pcmx && desty > pcmy){
      while (destx = pcmx && desty > pcmy){
        printf("Up\n");
        pcmy = pcmy + 1;
      }
    }
    if (destx = pcmx && desty < pcmy){
      while (destx = pcmx && desty < pcmy){
        printf("Down\n");
        pcmy = pcmy - 1;
      }
    }
    if (desty = pcmy && destx > pcmx){
        while (destx != pcmx){
          printf("Left \n");
          pcmx = pcmx + 1;
        }
     }
    if (desty = pcmy && destx < pcmx){
      while (destx != pcmx){
        printf("Right\n");
        pcmx = pcmx - 1;
      }
     }
}
/*Top Left Quadrant */
if (destx < 0 && desty > 0){
  if (destx != pcmx && desty != pcmy){
    while (destx != pcmx && desty != pcmy){
      printf("Up, ");
      printf("Left\n");
      pcmx = pcmx - 1;
      pcmy = pcmy + 1;
    }
  }
  if (destx = pcmx && desty > pcmy){
   while (desty != pcmy){
     printf("Up \n");
     pcmy = pcmy + 1;
   }
  }
  if (destx = pcmx && desty < pcmy){
    while (desty != pcmy){
      printf("Down \n");
      pcmy = pcmy + 1;
    }
  }
  if (desty = pcmy && destx > pcmx){
      while (destx != pcmx){
        printf("Left \n");
        pcmx = pcmx + 1;
      }
   }
  if (desty = pcmy && destx < pcmx){
    while (destx != pcmx){
      printf("Right\n");
      pcmx = pcmx - 1;
    }
   }
}
/*Bottom Left Quadrant*/
if (destx < 0 && desty < 0){
  if (destx != pcmx && desty != pcmy){
    while(destx != pcmx && desty != pcmy){
      printf("Down\n");
      printf("Left\n");
      pcmx = pcmx - 1;
      pcmy = pcmy - 1;
    }
  }
  if (desty = pcmy && destx > pcmx){
      while (destx != pcmx){
        printf("Left \n");
        pcmx = pcmx + 1;
      }
   }
  if (desty = pcmy && destx < pcmx){
    while (destx != pcmx){
      printf("Right\n");
      pcmx = pcmx - 1;
    }
   }
   if (destx = pcmx && desty > pcmy){
     while (destx = pcmx && desty > pcmy){
       printf("Down\n");
       pcmy = pcmy + 1;
     }
   }
   if (destx = pcmx && desty < pcmy){
     while (destx = pcmx && desty < pcmy){
       printf("Up\n");
       pcmy = pcmy - 1;
     }
   }
}
printf("Pac-man has arrived at his destination");
return 0;
}
