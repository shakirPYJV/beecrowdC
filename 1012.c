#include<stdio.h>
#include<math.h>

int main()
{

double A,B,C,triangle,circle,trapezuium,square,rectangle,pi;
pi = 3.14159;

scanf("%lf%lf%lf",&A,&B,&C);

triangle = 0.5 * A * C;
circle = pi * pow(C,2);
trapezuium = ((A+B) / 2.0) * C ;
square = pow(B,2);
rectangle = A * B;

printf("TRIANGULO: %.3lf\n",triangle);
printf("CIRCULO: %.3lf\n",circle);
printf("TRAPEZIO: %.3lf\n",trapezuium);
printf("QUADRADO: %.3lf\n",square);
printf("RETANGULO: %.3lf\n",rectangle);




return 0;
}

