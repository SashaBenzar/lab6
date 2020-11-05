#include <stdio.h>
#include <locale.h>
#include <math.h>
int ari(int arr[], int n);
int main()
{
    int col,d=0,sum;
    scanf("%d", &col);
    int a[col]; 
for(int i = 0; i < col; i++) //введення данних
{
  printf("a[%d]=", i);
  scanf("%d", &a[i]);
}
sum=ari(a,col);
printf("середнє арифметичне індексів максимального та мінімального елементів:%d",sum);
}

int ari(int arr[], int n)
{
int suma=0,max = arr[0],min = arr[0],ma=0,mi=0;
for(int i = 0; i < n; i++) //обчислення макс. числа
{
 if(arr[i] > max)
 {
 max = arr[i];
 }
}
for(int i = 0; i < n; i++) //обчислення мін. числа
{
 if(arr[i] < min)
 {
 min = arr[i];
 }
}
for(int i = 0; i < n; i++) //обчислення індекса макс. числа
{
 if(max==arr[i])
 {
 ma = i;
 }
}
for(int i = 0; i < n; i++) //обчислення індекса мін. числа
{
 if(min==arr[i])
 {
 mi = i;
 }
}
suma=(mi+ma)/2;
return suma;
}
