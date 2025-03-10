#include <stdio.h>
 int main()
 {
 float L,at,pt,h;
 L=7;
 h=sqrt(pow(7, 2) + pow(21, 2));
 at=(3.141592*(10.5*10.5))/2+ L*(3*L)*3;
 pt=(21*3.141592)/2+ h*2+ 7*L;
 printf("el area total es:%f\n", at);
 printf("el perimetro total es:%f\n",pt);
 return 0;
 }
