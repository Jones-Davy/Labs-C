#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
#include <malloc.h>
int main()
{
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
setlocale(LC_ALL, "rus");
int *matr;
int N , M ;
int i, j, min, k, l;
printf("----���� �������� �������----\n");
printf("������� N\n");
scanf("%d", &N);
printf("������� M\n");
scanf("%d", &M);
matr = (int *)malloc(N * M * sizeof(int));
       for (i = 0; i < N; i++)
    {
for (j = 0; j < M; j++)
{
printf("matr[%d][%d]= ", i, j);
scanf("%d", (matr + i * M + j));
}
}
for (i = 0; i < N; i++)
{
for (j = 0; j < M; j++)
{
printf("%d ", *(matr + i * M + j));
}
printf("\n");
}


          for (i = 1; i < N; i = i + 2)
          {
          min = (matr + i * M + 0);
          for (j = 0; j < M; j++)
          {
          if (min > *(matr + i * M + j))
          {
            min = *(matr + i * M + j);
            k = i;
            l = j;


}}
        printf("\n������� � ����������� ��������� ����� %d\n", min);
        printf("������� ��������� � ������ � ������� %d \n", k);
        printf("������� ��������� � ������� � ������� %d \n", l);

}

}
