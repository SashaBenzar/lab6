﻿#include <stdio.h>
#include <math.h>
#include <float.h>
#include <time.h>
#include <stdlib.h>

int* max_mas(int n, int m, int arr[n][m]);
int main()
{
const int rowCount = 3, colCount = 4, Low = -100, High = 100;
srand(time(0));
int a[rowCount][colCount]; 
for (int i = 0; i < rowCount; i++) //вхідні данні
for (int j = 0; j < colCount; j++)
a[i][j]=Low+rand()%High;

for (int i = 0; i < rowCount; i++){ //введення a[0]
for (int j = 0; j < colCount; j++){
printf("%d\t", a[i][j]);
}
printf("\n");
}
printf("\n");
int *b=max_mas(rowCount, colCount, a); //присвоєння значення массиву b[] 
for (int j = 0; j < colCount; j++) //виведення массиву b[]
{
printf("b[%d]=%d\n", j, b[j]);
}
}

int* max_mas(int n, int m, int arr[n][m])
{
int b[m];
for (int j = 0; j < m; j++)
{
  b[j]=999;
}
for (int i = 0; i < n; i++) //пошук b[0]
for (int j = 0; j < m; j++){
if(arr[i][j] < b[j])
{
b[j]=arr[i][j];
}
}
return b;
}
