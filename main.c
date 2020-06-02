#include <pola.h>
#include <objetosc.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char **argv)
{
switch(argc)
{
case 1:
{
printf("Nie podano zadnych wartosci bokow\n");
break;
}
case 2:
{
double a=atof(argv[1]);
printf("Podano jedynie jeden bok prostokata rowny: %.3f\n",a);
printf("Nie mozna obliczyc pola prostokata\n");
printf("Nie podano zadnych bokow prostopadloscianu\n");
printf("Nie mozna obliczy pola i objetosci prostopadloscianu\n");
break;
}
case 3:
{
double a=atof(argv[1]);
double b=atof(argv[2]);
pole_prostokata(a,b);
printf("Nie podano zadnych bokow prostopadloscianu\n");
printf("Nie mozna obliczyc pola i objetosci prostopadloscianu\n");
break;
}
case 4:
{
double a=atof(argv[1]);
double b=atof(argv[2]);
pole_prostokata(a,b);
a=atof(argv[3]);
printf("Podano tylko jeden bok prostopadloscianu rowny: %.3f\n",a);
printf("Nie mozna obliczyc pola i objetosci prostopadloscianu\n");
break;
}
case 5:
{
double a=atof(argv[1]);
double b=atof(argv[2]);
pole_prostokata(a,b);
a=atof(argv[3]);
b=atof(argv[4]);
printf("Podano tylko dwa boki prosotpadloscianu rowne: %.3f i %.3f\n",a,b);
printf("Nie mozna obliczyc pola i objetosci prostopadloscianu\n");
break;
}
case 6:
{
double a=atof(argv[1]);
double b=atof(argv[2]);
pole_prostokata(a,b);
a=atof(argv[3]);
b=atof(argv[4]);
double h=atof(argv[5]);
pole_prostopadloscianu(a,b,h);
objetosc_prostopadloscianu(a,b,h);
break;
}
default:
{
double a=atof(argv[1]);
double b=atof(argv[2]);
pole_prostokata(a,b);
a=atof(argv[3]);
b=atof(argv[4]);
double h=atof(argv[5]);
pole_prostopadloscianu(a,b,h);
objetosc_prostopadloscianu(a,b,h);
printf("Podano %d niepotrzebnych parametrow\n",argc-6);
printf("Niepotrzebnymi argumentami sa: ");
int i=1;
for(i;i+5<argc;i+=1)
{
printf("%s ",argv[i+5]);
}
printf("\n");
break;
}
}
} 
