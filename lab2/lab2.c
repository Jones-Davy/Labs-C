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

 puts ("������� ������� ��� ���������� �������");
 puts ("T1 - ������� �1");
 puts ("T2 - ������� �2");
 puts ("T3 - ������� �3");
 puts ("T4 - ������� �4");
 puts ("exit - ����� �� ���������\n");
 scanf (" %6s" , meniu , 6);



      if (strcmp(meniu, T1) == 0)
      {
          int j;
          int sum=0;
          int i;
          int n;
          int a[i];
           printf ("������� ����� ����������� �������:  ");
          scanf("%d", &n);
          printf("���� ��������� ������� :\n");
          for(i = 0; i<n; i++){
            printf("a[%d] =", i);
            scanf ("%d", &a[i]);}

        	    printf ("����� ��������� �������:\n");
				for (i = 0; i < n; i++) {
					printf ("%d ", a[i]);
				} printf ("\n");

				printf("����� ����� ��������� � �������������� ������� ����������..");
				for (i = 0; i < n; i++){
                    if (a[i] <0 && a[i] % 2 == 0) sum+=a[i];
				}
				printf("����� ��������� = %d\n",sum);
      }
      else if (strcmp(meniu, T2) == 0)
      {
        int b[100][100] = {0};
    int M, N, i, j, s = 0, st = 0, min=100;
      printf("������� ���������� ����� (N) � �������� (M):\n");
      printf("N = ");
      scanf("%d", &N);
      printf("M = ");
      scanf("%d", &M);
    printf("\n");
    printf("������� �������:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

               printf("����� ��������� �������\n");
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

            printf("\n ����������� ���� ���� �������� ��������� b[%d][%d]= %d\n", s, st, min);
      }
           else if (strcmp(meniu,T3) == 0){
		int i;
		int k=0, h=0;
		char str1[] = "������� ������:";
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
case '�': case '�':
case '�': case '�':
case '�': case '�':
case '�': case '�':
case '�': case '�':
case '�': case '�':
case '�': case '�':
case '�': case '�':
case '�': case '�':
    k++;
    break;
}
}

printf ("���������� ���� � ������ � 3 �������� = %d\n", h);

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
    printf("������� �����:\n");
    getchar();
    gets(S);
    printf("������� ������ �����:\n");
    gets(Slovo1);
    printf("������� ������ �����:\n");
    gets(Slovo2);
    Replace(S,Slovo1,Slovo2,result);
    printf("����������������� �����: %s\n\n", result);
    }
    }







  else if (strcmp(meniu,exit) == 0){
  	return 0 ;
  }
  else  {
  	printf("������!!\n����� ������� ���!\n\n\n");
  }




		}
		system("pause");

}







