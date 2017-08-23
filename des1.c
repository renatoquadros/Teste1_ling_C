#include <stdio.h>
void main()
{
     int x,y,z;
     printf("digite o valor de x: ");
     scanf("%i",&x);
     printf("digite o valor de y: ");
     scanf("%i",&y);
     
     printf(" numero x = %.2i e numero y = %.2i\n",x,y);
     z = x;
     x = y;
     y = z;
     
     printf(" numero x = %.2i e numero y = %.2i\n",x,y);
     system("pause");
     
}     
     
