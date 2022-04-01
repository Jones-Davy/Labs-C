#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
 struct sellers
 {
  int tabnum;
  char fio[50];
  char adr[50];
  int number;
  int oklad;
}seller;

 struct process
 {
  int art;
  char name[50];
  char proizv[50];
  int razr;
  int chast;
  char arx[50];
  int stoimost;
} proc;

union all
{
struct  sellers seller;
struct  process proc;
};
int main(void) {
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
union all D[50];
char V;
int i;
int count=0;
int countP=0;
int countS=0;
int check[50];

setlocale(LC_ALL,"rus");
enum Menu {Z1=1,Z2,Z3,Z4,Z5,Exit} N;
do {
puts ("\n���� ���������");
puts ("1-���������� ���������� � ����� ���������� ��� �������� � ������");
puts ("2-����������� ���������� � ����������� � ���������");
puts ("3-����������� ���������� � ����������� � ���� �������");
puts ("4-����������� ���������� ���������");
puts ("5-����� ���������� � ��������� � ������� ����� 10000 ������");
puts ("6-��� ������\n\n");

puts ("�������� ����� ���������");
scanf (" %d",&N);
switch (N) {
	case 1 :
		puts ("\n���� ������ �����");
        puts ("P-���������� ���������� � ����� ����������");
        puts ("S-���������� ���������� � ����� ��������");
		scanf (" %c",&V);
		if(V=='P'){
		  printf("���� ������ � ����� ����������������\n");
		    printf ("������� ����������\n");
		    scanf(" %d", &D[count].proc.art);
		 	printf("�������� ����������\n");
		 	scanf(" %s", &D[count].proc.name);
			printf ("�����-�������������\n");
			scanf(" %s", &D[count].proc.proizv);
			printf("�����������\n");
			scanf(" %d", &D[count].proc.razr);
			printf("�������� �������\n");
			scanf(" %d", &D[count].proc.chast);
			printf("�����������\n");
			scanf(" %s", &D[count].proc.arx);
			printf("����\n");
			scanf(" %d", &D[count].proc.stoimost);
			check[count]=1;
			countP++;
		    count++;
	    }
		 else if (V=='S'){
	       printf("���� ������ � ����� ��������\n");
	    	printf("��������� ����� ��������\n");
		    scanf(" %d", &D[count].seller.tabnum);
		 	printf("�.�.�. ��������\n");
		 	gets(D[count].seller.fio);
		 	gets(D[count].seller.fio);
			printf ("����� ��������\n");
			gets(D[count].seller.adr);
			printf("���������� ����� ��������\n");
			scanf(" %d", &D[count].seller.number);
			printf("����� ��������\n");
			scanf(" %d", &D[count].seller.oklad);
			check[count]=2;
			countS++;
			count++;
	     }
	     else
	     printf("\nERROR...\n���������� �����!\n\n");
		break;
	case 2 :
		printf ("����������� ���������� � ����������������� � ���������\n\n");
		for( i=0;i<count;i++){
			if(check[i]==1){

			    printf ("|------------------------------------|------------------------|\n");
				printf ("|         ���������                  |                        |\n");
				printf ("|------------------------------------|------------------------|\n");
		        printf ("|������� ����������                  |%24d|\n", D[i].proc.art );
		        printf ("|�������� ����������                 |%24s|\n", D[i].proc.name);
		        printf ("|�����-�������������                 |%24s|\n", D[i].proc.proizv);
		        printf ("|�����������                         |%24d|\n", D[i].proc.razr);
		        printf ("|�������� �������                    |%24d|\n", D[i].proc.chast);
		        printf ("|�����������                         |%24s|\n", D[i].proc.arx);
		        printf ("|����                                |%24d|\n", D[i].proc.stoimost);
		        printf ("|------------------------------------|------------------------|\n");
	    }
		}
		for( i=0;i<count;i++){
			if (check[i]==2){

			    printf ("|------------------------------------|------------------------|\n");
				printf ("|          ��������                  |                        |\n");
				printf ("|------------------------------------|------------------------|\n");
		        printf ("|��������� �����                     |%24d|\n", D[i].seller.tabnum );
		        printf ("|�.�.�.                              |%24s|\n", D[i].seller.fio);
		        printf ("|�����                               |%24s|\n", D[i].seller.adr);
		        printf ("|���������� �����                    |%24d|\n", D[i].seller.number);
		        printf ("|�����                               |%24d|\n", D[i].seller.oklad);
		        printf ("|------------------------------------|------------------------|\n");
		    }
		}
	break;
	case 3 :
		printf ("����������� ���������� � ����������� � ���� �������\n\n");
			for( i=0;i<count;i++){
			if(check[i]==1){

			    printf ("|------------------------------------|------------------------|\n");
				printf ("|         ���������������            |                        |\n");
				printf ("|------------------------------------|------------------------|\n");
		        printf ("|������� ����������������            |%24d|\n", D[i].proc.art );
		        printf ("|�������� ����������������           |%24s|\n", D[i].proc.name);
		        printf ("|�����-�������������                 |%24s|\n", D[i].proc.proizv);
		        printf ("|�����������                         |%24d|\n", D[i].proc.razr);
		        printf ("|�������� �������                    |%24d|\n", D[i].proc.chast);
		        printf ("|�����������                         |%24s|\n", D[i].proc.arx);
		        printf ("|����                                |%24d|\n", D[i].proc.stoimost);
		        printf ("|------------------------------------|------------------------|\n");
	    }
		}
		break;
	case 4 :
		printf ("���������� ��������� ����� %d", countS );
		break;
	case 5 :
		printf("\t\t\t\t���������� � ��������� � ������� ����� 10000 ������\n\n");
		for ( i = 0; i < count; i++)
					{
						if ((D[i].seller.oklad<20000) && (check[i] == 2 ))
						{
						 printf ("|------------------------------------|------------------------|\n");
			           	 printf ("|          ��������                  |                        |\n");
				         printf ("|------------------------------------|------------------------|\n");
		                 printf ("|��������� �����                     |%24d|\n", D[i].seller.tabnum );
		                 printf ("|�.�.�.                              |%24s|\n", D[i].seller.fio);
		                 printf ("|�����                               |%24s|\n", D[i].seller.adr);
		                 printf ("|���������� �����                    |%24d|\n", D[i].seller.number);
		                 printf ("|�����                               |%24d|\n", D[i].seller.oklad);
		                 printf ("|------------------------------------|------------------------|\n");
						}
					}
					break;
	case 6 :
		return 0 ;
		break;
		default :
			printf("ERROR!!!!\n������ ������ � ���� �� ����������\n");
			break;

}



} while ( N != 6);


system("pause");

}

