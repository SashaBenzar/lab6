#include <stdlib.h> 
#include <stdio.h>
#include <time.h>

int sumNP(const int arr[], int n); //1 задача
int sum(const int arr[], int n); //2 задача
int main(void) {
int suma1,suma2;
const int Low=-100, High=100; 
int colCount;
scanf("%d",&colCount);
srand(time(0));
int a[colCount];
for (int i=0; i<colCount; i++) //генерація рандомних чисел
{
a[i]=Low+rand()%High;
}
for (int i=0; i<colCount; i++) 
{
printf("a[%d]=%d\n", i, a[i]);
}
suma1=sumNP(a, colCount); //1 задача
suma2=sum(a, colCount); //2 задача
printf("\nсуму елементів масиву з непарними номерами:%d\n",suma1); //1 відповідь
if(suma2==999)
{
printf("в нас не має елементів більших за 0");
}
else
{
printf("суму елементів масиву, розташованих між першим й другим додатними елементами:%d",suma2); //2 відповідь
}
}

int sumNP(const int arr[], int n) //1 задача
{
int i, s = 0;
for(i = 0; i < n; i++) {
if(i%2!=0)
s += arr[i];
}
return s;
}

int sum(const int arr[], int n) //2 задача
{
int i,dod2,dod1,ind2,ind1,suma=0,m=0;
for(i = n; i >= 0; i--) //перший додатній елемент
{
if(arr[i]>0)
dod1=arr[i];
}
for(i = 0; i < n; i++) //другий додатній елемент
{
if(arr[i]>0)
dod2=arr[i];
}
for(int i = 0; i < n; i++) 
{
  if(dod1==arr[i]) //індекса першого додатнього елемента
  {
  ind1 = i;
  m+=1;
  }
  if(dod2==arr[i]) //індекса другого додатнього елемента
  {
  ind2 = i;
  m+=1;
  }
}
if(m>0)
{
for(int i = 0; i < n; i++) //задача
{
  if(ind1<i && i<ind2)
  {
    suma+=arr[i];
  }
}
return suma;
}
return 999;
}
