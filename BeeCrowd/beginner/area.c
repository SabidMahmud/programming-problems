#include <stdio.h>
#include <math.h>
int main(void)
{
    const double pi = 3.14159;
    float A, B, C;
    float triangulo, circulo, trapezio, quadrado, retangulo;
    scanf("%f %f %f", &A, &B, &C);
    triangulo = A*C*1/2;
    printf("TRIANGULO: %.3f\n", triangulo);
    circulo = pi * pow(C,2);
    printf("CIRCULO: %.3f\n", circulo);
    trapezio = (A+B)*C/2;
    printf("TRAPEZIO: %.3f\n", trapezio);
    quadrado = pow(B,2);
    printf("QUADRADO: %.3f\n", quadrado);
    retangulo = A*B;
    printf("RETANGULO: %.3f\n", retangulo);
    return 0;
}