#include <stdio.h>

void pole_prostokata(double a,double b)
{
printf("Pole prostokata jest rowne: %.3f\n",a*b);
}

void pole_prostopadloscianu(double a,double b,double h)
{
double P=2*a*b+2*a*h+2*b*h;
printf("Pole prostopadloscianu jest rowne: %.3f\n",P);
}
