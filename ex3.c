#include <stdio.h>
void main()
{
     float ar,di,c,pi,r;
     pi=3.14;
     printf("digite o raio: ");
     scanf("%f",&r);
     
     di=2*r;
     c=2*pi*r;
     ar=pi*r*r;
     
     printf("Diametro %.2f\n", di);
     printf("Comprimento %.2f\n",c);
     printf("Area %.2f\n",ar);
     
     system("pause");
     
     
     
     
}     
