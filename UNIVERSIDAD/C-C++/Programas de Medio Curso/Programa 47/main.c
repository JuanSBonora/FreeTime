#include<stdio.h>
#include<math.h>

int main()
{
 int n;
 float x;
 int expo;
 double SignoSumando;
 double base=-1;
 int potencia = 1;
 long int fact = 1;
 long double seno = 0;
 printf ("ingrese el nivel de presicion n: ");
 scanf("%d", &n);
 printf ("ingrese el valor de x: ");
 scanf ("%f",&x);  
 expo = (2*n)+1;
 for (int i = 1; i <= expo; i++)
 {
  SignoSumando = pow(base,i);
  potencia = pow(x,(2*i-1));
  for (int y = 2; y <= expo; y++)
  {
   fact=fact*y;
  }
  seno = seno + (((SignoSumando)/((float)fact))* (float)potencia);
 }
 printf("El resultado es: %f", seno);
 return 0;
}
