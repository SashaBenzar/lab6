#include <stdio.h>
#include <math.h>
# define M_PI		3.14159265358979323846

float tlotic(float x);//завдання 1
float tlotcc(float x);//завдання 2
float taotic(float x);//завдання 3
float taotcc(float x);//завдання 4
int main(void) {
  float a;
  float x1, x2, x3, x4;
  printf("введіть сторону квадрата:");
  scanf("%g", &a);
  x1=tlotic(a);
  x2=tlotcc(a);
  x3=taotic(a);
  x4=taotcc(a);
  printf("довжинa вписаного в нього кола: %g\n",x1);
  printf("довжинa описаного навколо нього кола: %g\n",x2);
  printf("площa вписаного в нього круга: %g\n",x3);
  printf("площa описаного навколо нього круга: %g",x4);
  return 0;
}
float tlotic(float x) 
{
float m;
m=x*M_PI;
return m;
}
float tlotcc(float x)
{
float m;
m=sqrt(2)*x*M_PI;
return m;
}
float taotic(float x)
{
float m;
m=pow(x,2)*M_PI;
return m;
}
float taotcc(float x)
{
float m;
m=sqrt(2)*pow(x,2)*M_PI;
return m;
}
