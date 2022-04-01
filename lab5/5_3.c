

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
char rus[] = "Россия";


do {
puts ("\nМеню Программы");
puts ("0-Добавление информации о новом процессоре ");
puts ("1-Поиск информации о 32-рядных процессорах");
puts ("2-Поиск информации о процессорах со стоимостью 8000-10000р");
puts ("3-Отображение информации о процессорах в виде таблицы");
puts ("4-Определение количества 64-разрядных процессоров с тактовой частотой 2,7 ГГц");
puts ("5-Определение количества процессоров, изготовленных в стране <<Россия>>");
puts ("6-Для выхода\n\n");

puts ("Выберите пункт программы");
scanf (" %d",&P);
switch (P) {
	case 0 :
        printf("Добавление информации о новом процессоре\n");
		D = (proc*)realloc(D, (n+1)*sizeof(proc));

		printf("Ввод данных\n");


		    printf ("Артикул процессора\n");
		    scanf(" %d", &((D+n)->art));



	        for (k=n-1;k>=0;k--){

		      if (((D+n)->art)==((D+k)->art)){
		       printf ("Процессор с таким Артикулем уже существует.\nВведите другой артикул.\n");
		       scanf(" %d", &((D+n)->art));
		      }}


		 	printf("Название Процессора\n");
		 	scanf(" %s", &((D+n)->name_p));
		 	printf ("Код Фирмы-производителя процессора\n");
		 	scanf(" %d", &((D+n)->made.code));
			printf ("Название фирмы-производителя\n");
			scanf(" %s", &((D+n)->made.name));
			printf ("Страна\n");
			scanf (" %s", &((D+n)->made.country));
			printf("Телефон\n");
			scanf(" %d", &((D+n)->made.tel));
			printf("Разрядность\n");
			scanf(" %d", &((D+n)->razr));
			printf("Тактовая частота\n");
			scanf(" %d", &((D+n)->chast));
			printf("Архитектура\n");
			scanf(" %s", &((D+n)->arx));
			printf("Стоимость\n");
			scanf(" %d", &((D+n)->stoimost));

		n++;

		break;

	case 1 :
	printf("32 - рядные процессоры\n");
		for( i=0;i<n;i++) {
			if (((D+i)->razr) == 32) {
				printf ("Процессор - №%d\n", i+1);
		        printf ("Артикул процессора - %d\n", ((D+i)->art ));
		        printf ("Название процессора  -  %s\n", ((D+i)->name_p));
		        printf ("Код Производителя процессора - %d\n", ((D+i)->made.code ));
		        printf ("Название фирмы-производителя - %s\n", ((D+i)->made.name));
		        printf ("Страна - %s\n", ((D+i)->made.country));
		        printf ("Телефон - %d\n", ((D+i)->made.tel));
		        printf ("Разрядность - %d\n",((D+i)->razr));
		        printf ("Тактовая частота - %d\n", ((D+i)->chast));
		        printf ("Архитектура - %s\n", ((D+i)->arx));
		        printf ("Цена - %d\n\n", ((D+i)->stoimost));
			}

		}
       break;
    case 2 :
    	printf("Процессоры со стоимостью 8000-10000р\n");
    	for( i=0;i<n;i++) {
    		if((((D+i)->stoimost)>=8000) && (((D+i)->stoimost)<=10000)){
    			printf ("Процессор - №%d\n", i+1);
		        printf ("Артикул процессора - %d\n", ((D+i)->art ));
		        printf ("Название процессора  -  %s\n", ((D+i)->name_p));
		        printf ("Код фирмы-производителя процессора - %d\n", ((D+i)->made.code ));
		        printf ("Название фирмы-производителя - %s\n", ((D+i)->made.name));
		        printf ("Страна - %s\n", ((D+i)->made.country));
		        printf ("Телефон - %d\n", ((D+i)->made.tel));
		        printf ("Разрядность - %d\n",((D+i)->razr));
		        printf ("Тактовая частота - %d\n", ((D+i)->chast));
		        printf ("Архитектура - %s\n", ((D+i)->arx));
		        printf ("Цена - %d\n\n",((D+i)->stoimost));
    		}

    	}
    	break;


	case 3 :
		printf("Отображение информации о процессорах\n\n");
		for( i=0;i<n;i++){
				printf ("|------------------------------------|------------------------|\n");
				printf ("|         Процессор                  |             №%d         |\n", i+1);
				printf ("|------------------------------------|------------------------|\n");
		        printf ("|Артикул процессора                  |%24d|\n", ((D+i)->art ));
		        printf ("|Название процессора                 |%24s|\n", ((D+i)->name_p));
		        printf ("|Код производителя процессора        |%24d|\n", ((D+i)->made.code)) ;
		        printf ("|Название фирмы-производител         |%24s|\n", ((D+i)->made.name));
		        printf ("|Страна                              |%24s|\n", ((D+i)->made.country));
		        printf ("|Телефон                             |%24d|\n", ((D+i)->made.tel));
		        printf ("|Разрядность                         |%24d|\n", ((D+i)->razr));
		        printf ("|Тактовая частота                    |%24d|\n", ((D+i)->chast));
		        printf ("|Архитектура                         |%24s|\n", ((D+i)->arx));
		        printf ("|Цена                                |%24d|\n", ((D+i)->stoimost));
		        printf ("|------------------------------------|------------------------|\n");


		}
		break;

	case 4 :
		printf ("Определение количества 64-разрядных процессоров с тактовой частотой 2,7 ГГц\n");
		for(i=0;i<n;i++) {
			if ((((D+i)->chast) == 2,7) && (((D+i)->razr) == 64)) {
				L=L+1;

			}

		}
		printf ("-----------------------------------------------------------------------------------\n");
		printf ("                                      LOADING                                      \n");
		printf ("-----------------------------------------------------------------------------------\n");
		printf ("Количество таких процессоров - %d\n", L);
		printf ("-----------------------------------------------------------------------------------\n");
		break;

	case 5 :
	 printf("Определение количества процессоров, изготовленных в стране «Россия» (rus);\n");
	for( i=0;i<n;i++) {
			if (strcmp((D+i)->made.country,rus) == 0)  {
		      R = R+1;

		     }
	}
		printf ("-----------------------------------------------------------------------------------\n");
		printf ("                                      LOADING                                      \n");
		printf ("-----------------------------------------------------------------------------------\n");
		printf ("Количество таких процессоров - %d\n", R);
		printf ("-----------------------------------------------------------------------------------\n");
		break;
	case 6 :
		return 0 ;
		break;
		default :
			printf("ERROR!!!!\nТакого пунтка в меню не существует\n");
			break;

}



} while ( P != 6);


system("pause");

}
