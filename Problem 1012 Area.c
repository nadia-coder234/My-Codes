#include <stdio.h>

int main(){
 double A,B,C,pi = 3.14159;
 scanf("%lf%lf%lf",&A,&B,&C);
 double TRIANGULO=(A*C)/2.0;
 printf("TRIANGULO: %.3lf\n",TRIANGULO);
 double CIRCULO=pi*C*C;
 printf("CIRCULO: %.3lf\n",CIRCULO);
 double TRAPEZIO=((A+B)*C)/2.0;
 printf("TRAPEZIO: %.3lf\n",TRAPEZIO);
 double QUADRADO=B*B;
 printf("QUADRADO: %.3lf\n",QUADRADO);
 double RETANGULO=A*B;
 printf("RETANGULO: %.3lf\n",RETANGULO);
 return 0;
}
