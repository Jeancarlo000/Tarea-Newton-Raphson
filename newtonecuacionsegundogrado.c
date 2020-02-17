#include<stdio.h>
#include<conio.h>
#include<math.h>

float error;
float raiz,e_test=0, f_x1,f_x1p;
float x1;
float xr;

float f_x(float x)
{
return ((2*(x*x))-x-5);
}
float f_xp(float x)
{
return (4*x-1);
}

float operaciones(float f_x1, float e)
{
do
{
f_x1=f_x(x1);
f_x1p=f_xp(x1);
xr=x1-(f_x1/f_x1p);
}
while(e_test>e);

e_test=fabs((xr-x1));

raiz=xr;
}

int main()
{
printf("\nCalcula la raiz de la funcion x^2-x-5 por el metodo de punto fijo");
printf("\n\nIngresa el valor inicial de X_0");
printf("\nX_0: ");
scanf("%f",&x1);
printf("\nDigita el error permitido: ");
scanf("%f",&error);

operaciones(x1,error);

printf("\nEL valor de la raiz es aproximadamente:%f",raiz);

getch();
return 0;

}
