#include<stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
#include<malloc.h>
int main()
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL,"rus");
    int **matr;
    int N , M ;
    int i, j, min, k = 0, l = 0;
    printf("----���� �������� �������----\n");
    printf("������� N\n");
    scanf("%d", &N);
    printf("������� M\n");
    scanf("%d", &M);

    matr=(int**)malloc(N*sizeof(int));
    for(i=0; i<N; i++)
    {*(matr+i)=(int*)malloc(M*sizeof(int));
        for(j=0; j<M; j++)
        {
            printf("matr[%d][%d]= ",i,j);
            scanf("%d",&(*(*(matr+i)+j)));
        }
    }

              for(i=0; i<N; i++)
              {
              for(j=0; j<M; j++)
              {
              printf("%d ",(*(*(matr+i)+j)));
              }
              printf("\n");
              }


     for(i=1; i<N; i+=2)
    {
     min = (*(*(matr+i)+0));

     for(j=0; j<M; j++)
        {
     if((*(*(matr+i)+j))<min){
     min=*(*(matr+i)+j);

           	k = i;
           	l = j;

           }}
    printf ("������� � ����������� ��������� ����� %d\n",min);
    printf ("������� ��������� � ������ � ������� %d \n", k);
    printf ("������� ��������� � ������� � ������� %d \n", l);
}
}