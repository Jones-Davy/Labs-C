

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
typedef struct
 {
  int code;
  char name[50];
  char country[50];
  int tel;
 } Fp;
typedef struct
 {
  int art;
  char name_p[50];
  Fp made;
  int razr;
  int chast;
  char arx[50];
  int stoimost;

} proc;
int main() {
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int kolv, nkolv;
 proc *D;
 D = (proc*)malloc(1*sizeof(proc));
 int n=0;
int i;
int k ;
int L=0;
int R=0;
setlocale(LC_ALL,"rus");
enum Menu {Z1,Z2,Z3,Z4,Z5,Z6,Exit} P;
char rus[] = "������";


do {
puts ("\n���� ���������");
puts ("0-���������� ���������� � ����� ���������� ");
puts ("1-����� ���������� � 32-������ �����������");
puts ("2-����� ���������� � ����������� �� ���������� 8000-10000�");
puts ("3-����������� ���������� � ����������� � ���� �������");
puts ("4-����������� ���������� 64-��������� ����������� � �������� �������� 2,7 ���");
puts ("5-����������� ���������� �����������, ������������� � ������ <<������>>");
puts ("6-��� ������\n\n");

puts ("�������� ����� ���������");
scanf (" %d",&P);
switch (P) {
	case 0 :
        printf("���������� ���������� � ����� ����������\n");
		D = (proc*)realloc(D, (n+1)*sizeof(proc));

		printf("���� ������\n");


		    printf ("������� ����������\n");
		    scanf(" %d", &((D+n)->art));



	        for (k=n-1;k>=0;k--){

		      if (((D+n)->art)==((D+k)->art)){
		       printf ("��������� � ����� ��������� ��� ����������.\n������� ������ �������.\n");
		       scanf(" %d", &((D+n)->art));
		      }}


		 	printf("�������� ����������\n");
		 	scanf(" %s", &((D+n)->name_p));
		 	printf ("��� �����-������������� ����������\n");
		 	scanf(" %d", &((D+n)->made.code));
			printf ("�������� �����-�������������\n");
			scanf(" %s", &((D+n)->made.name));
			printf ("������\n");
			scanf (" %s", &((D+n)->made.country));
			printf("�������\n");
			scanf(" %d", &((D+n)->made.tel));
			printf("�����������\n");
			scanf(" %d", &((D+n)->razr));
			printf("�������� �������\n");
			scanf(" %d", &((D+n)->chast));
			printf("�����������\n");
			scanf(" %s", &((D+n)->arx));
			printf("���������\n");
			scanf(" %d", &((D+n)->stoimost));

		n++;

		break;

	case 1 :
	printf("32 - ������ ����������\n");
		for( i=0;i<n;i++) {
			if (((D+i)->razr) == 32) {
				printf ("��������� - �%d\n", i+1);
		        printf ("������� ���������� - %d\n", ((D+i)->art ));
		        printf ("�������� ����������  -  %s\n", ((D+i)->name_p));
		        printf ("��� ������������� ���������� - %d\n", ((D+i)->made.code ));
		        printf ("�������� �����-������������� - %s\n", ((D+i)->made.name));
		        printf ("������ - %s\n", ((D+i)->made.country));
		        printf ("������� - %d\n", ((D+i)->made.tel));
		        printf ("����������� - %d\n",((D+i)->razr));
		        printf ("�������� ������� - %d\n", ((D+i)->chast));
		        printf ("����������� - %s\n", ((D+i)->arx));
		        printf ("���� - %d\n\n", ((D+i)->stoimost));
			}

		}
       break;
    case 2 :
    	printf("���������� �� ���������� 8000-10000�\n");
    	for( i=0;i<n;i++) {
    		if((((D+i)->stoimost)>=8000) && (((D+i)->stoimost)<=10000)){
    			printf ("��������� - �%d\n", i+1);
		        printf ("������� ���������� - %d\n", ((D+i)->art ));
		        printf ("�������� ����������  -  %s\n", ((D+i)->name_p));
		        printf ("��� �����-������������� ���������� - %d\n", ((D+i)->made.code ));
		        printf ("�������� �����-������������� - %s\n", ((D+i)->made.name));
		        printf ("������ - %s\n", ((D+i)->made.country));
		        printf ("������� - %d\n", ((D+i)->made.tel));
		        printf ("����������� - %d\n",((D+i)->razr));
		        printf ("�������� ������� - %d\n", ((D+i)->chast));
		        printf ("����������� - %s\n", ((D+i)->arx));
		        printf ("���� - %d\n\n",((D+i)->stoimost));
    		}

    	}
    	break;


	case 3 :
		printf("����������� ���������� � �����������\n\n");
		for( i=0;i<n;i++){
				printf ("|------------------------------------|------------------------|\n");
				printf ("|         ���������                  |             �%d         |\n", i+1);
				printf ("|------------------------------------|------------------------|\n");
		        printf ("|������� ����������                  |%24d|\n", ((D+i)->art ));
		        printf ("|�������� ����������                 |%24s|\n", ((D+i)->name_p));
		        printf ("|��� ������������� ����������        |%24d|\n", ((D+i)->made.code)) ;
		        printf ("|�������� �����-������������         |%24s|\n", ((D+i)->made.name));
		        printf ("|������                              |%24s|\n", ((D+i)->made.country));
		        printf ("|�������                             |%24d|\n", ((D+i)->made.tel));
		        printf ("|�����������                         |%24d|\n", ((D+i)->razr));
		        printf ("|�������� �������                    |%24d|\n", ((D+i)->chast));
		        printf ("|�����������                         |%24s|\n", ((D+i)->arx));
		        printf ("|����                                |%24d|\n", ((D+i)->stoimost));
		        printf ("|------------------------------------|------------------------|\n");


		}
		break;

	case 4 :
		printf ("����������� ���������� 64-��������� ����������� � �������� �������� 2,7 ���\n");
		for(i=0;i<n;i++) {
			if ((((D+i)->chast) == 2,7) && (((D+i)->razr) == 64)) {
				L=L+1;

			}

		}
		printf ("-----------------------------------------------------------------------------------\n");
		printf ("                                      LOADING                                      \n");
		printf ("-----------------------------------------------------------------------------------\n");
		printf ("���������� ����� ����������� - %d\n", L);
		printf ("-----------------------------------------------------------------------------------\n");
		break;

	case 5 :
	 printf("����������� ���������� �����������, ������������� � ������ �������� (rus);\n");
	for( i=0;i<n;i++) {
			if (strcmp((D+i)->made.country,rus) == 0)  {
		      R = R+1;

		     }
	}
		printf ("-----------------------------------------------------------------------------------\n");
		printf ("                                      LOADING                                      \n");
		printf ("-----------------------------------------------------------------------------------\n");
		printf ("���������� ����� ����������� - %d\n", R);
		printf ("-----------------------------------------------------------------------------------\n");
		break;
	case 6 :
		return 0 ;
		break;
		default :
			printf("ERROR!!!!\n������ ������ � ���� �� ����������\n");
			break;

}



} while ( P != 6);


system("pause");

}
