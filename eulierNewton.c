#include<stdio.h>
#include<conio.h>
#include<math.h>

float error;
float raiz,e_test=0;
float x1, f_x1, f_x1p;
float xr;

float f_x(float x)
{
return exp(-x)-x;
}
float f_xp(float x)
{
return -exp(-x)-1;
}


float operaciones(float x_1, float e)
{
do
{
f_x1=f_x(x_1);
f_x1p=f_xp(x_1);
xr=x_1-(f_x1/f_x1p);
if(xr==0)
   {break;}
e_test=fabs(xr-x_1);
x_1=xr;

}
while(e_test>e);
raiz=xr;
return raiz;
}



int main()
{
printf("\nCalcula la raiz de la funcion (e^-x)-x por el metodo de punto fijo");
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
