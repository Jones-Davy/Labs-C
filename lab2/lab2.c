#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <windows.h>
int main(){
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
setlocale(LC_ALL,"rus");
char T1[] = "T1";
char T2[] = "T2";
char T3[] = "T3";
char T4[] = "T4";
char exit[] = "exit";
char meniu[6];

while (strcmp(meniu,exit)!=0) {

 puts ("Введите команду для выполнения задания");
 puts ("T1 - Задание №1");
 puts ("T2 - Задание №2");
 puts ("T3 - Задание №3");
 puts ("T4 - Задание №4");
 puts ("exit - Выход из программы\n");
 scanf (" %6s" , meniu , 6);



      if (strcmp(meniu, T1) == 0)
      {
          int j;
          int sum=0;
          int i;
          int n;
          int a[i];
           printf ("Введите длину одномерного массива:  ");
          scanf("%d", &n);
          printf("Ввод элементов массива :\n");
          for(i = 0; i<n; i++){
            printf("a[%d] =", i);
            scanf ("%d", &a[i]);}

        	    printf ("Вывод элементов массива:\n");
				for (i = 0; i < n; i++) {
					printf ("%d ", a[i]);
				} printf ("\n");

				printf("Поиск суммы элементов с отрицательными четными значениями..");
				for (i = 0; i < n; i++){
                    if (a[i] <0 && a[i] % 2 == 0) sum+=a[i];
				}
				printf("Сумма элементов = %d\n",sum);
      }
      else if (strcmp(meniu, T2) == 0)
      {
        int b[100][100] = {0};
    int M, N, i, j, s = 0, st = 0, min=100;
      printf("Введите количество строк (N) и столбцов (M):\n");
      printf("N = ");
      scanf("%d", &N);
      printf("M = ");
      scanf("%d", &M);
    printf("\n");
    printf("Введите матрицу:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

               printf("Вывод элементов матрицы\n");
               for(i = 0; i<N; i++)
                {
               for(j = 0; j<M; j++)
                {
                     printf("%d ", b[i][j]);
               }
               printf("\n");
               }
        for (i=0; i<N; i++){
			for (j=0; j<M; j++){
                    if (i + j > N - 1)
                    {
                        if (b[i][j] < min){
                            min = b[i][j];
                            s=i;
                            st = j;
                            }

                    }

                    }
                }

            printf("\n минимальный член ниже побочной диагонали b[%d][%d]= %d\n", s, st, min);
      }
           else if (strcmp(meniu,T3) == 0){
		int i;
		int k=0, h=0;
		char str1[] = "Введите строку:";
		char str2[50];
		puts (str1);
		 getchar();
	    gets (str2);

	    printf ("\n");

for ( i = 0; i < sizeof(str2); i++)
{
 if(str2[i] == ' ' || str2[i] == '.'){
    if(k == 3){
        h++;
        k = 0;
    }else{
    k = 0;
    }
 }
if (str2[i] == '.') break;
switch (str2[i])
{
case 'а': case 'А':
case 'о': case 'О':
case 'и': case 'И':
case 'е': case 'Е':
case 'я': case 'Я':
case 'ю': case 'Ю':
case 'э': case 'Э':
case 'у': case 'У':
case 'ё': case 'Ё':
    k++;
    break;
}
}

printf ("Количество слов в тексте с 3 гласными = %d\n", h);

}

  else if (strcmp(meniu,T4) == 0){
  	void Replace(char S[],char Slovo1[],char Slovo2[],char result[])
    {
    int i, j, pos=0;
    for(i=0; S[i]; i++)
    {
        for(j=0; S[i+j] && Slovo1[j]; j++)
            if(S[i+j]!= Slovo1[j]) {break;}
        if(!Slovo1[j])
        {
            i+=j;
            for(j=0; Slovo2[j]; j++) {result[pos++] = Slovo2[j];}
        }
        for(j=0; S[i+j] && Slovo2[j]; j++)
            if(S[i+j]!= Slovo2[j]) {break;}
        if(!Slovo2[j])
        {
            i+=j-1;
            for(j=0; Slovo1[j]; j++) {result[pos++] = Slovo1[j];}
        }
        else
        {
            result[pos++] = S[i];
        }
        result[pos] = NULL;
    }
    strcpy(S,result);
    }
    {
    char S[100], Slovo1[10], Slovo2[10], result[150];
    printf("Введите текст:\n");
    getchar();
    gets(S);
    printf("Введите первое слово:\n");
    gets(Slovo1);
    printf("Введите второе слово:\n");
    gets(Slovo2);
    Replace(S,Slovo1,Slovo2,result);
    printf("Отредактированный текст: %s\n\n", result);
    }
    }







  else if (strcmp(meniu,exit) == 0){
  	return 0 ;
  }
  else  {
  	printf("ОШИБКА!!\nТакой команды нет!\n\n\n");
  }




		}
		system("pause");

}







