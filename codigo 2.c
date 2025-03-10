#include <stdio.h>
 int main()
{
  float L,pt, at, pcuad, acuad;
  L=7;
  pcuad=L/5;
  acuad=pcuad*pcuad;
  at=(3.141592*(3.5*3.5))/2+ L*L+ acuad*8;
  pt= (L*3.141592)/2+ pcuad*23;
  printf("el perimetro total es:%f\n",pt);
  printf("el area total es:%f\n",at);

  return 0;
  }
