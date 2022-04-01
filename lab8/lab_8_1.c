

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
struct Fp
{
	int code;
	char name[50];
	char country[50];
	int tel;
};
struct proc
{
	int art;
	char name_p[50];
	struct Fp made;
	int razr;
	int chast;
	char arx[50];
	int stoimost;
};
int kol = 0;

struct proc *d;
struct proc **D = &d;

void new_proc(int *n, struct proc **D)
{
	*n = *n + 1;
	*D = (struct proc *)realloc(*D, *n * sizeof(struct proc));
	printf("Введите данные о %d процессоре:\n", *n);
	printf("Артикул процессора\n");
	scanf(" %d", &(*(*D + *n - 1)).art);
	printf("Название Процессора\n");
	scanf(" %s", &(*(*D + *n - 1)).name_p);
	printf("Код Фирмы-производителя процессора\n");
	scanf(" %d", &(*(*D + *n - 1)).made.code);
	printf("Название фирмы-производителя\n");
	scanf(" %s", &(*(*D + *n - 1)).made.name);
	printf("Страна\n");
	scanf(" %s", &(*(*D + *n - 1)).made.country);
	printf("Телефон\n");
	scanf(" %d", &(*(*D + *n - 1)).made.tel);
	printf("Разрядность\n");
	scanf(" %d", &(*(*D + *n - 1)).razr);
	printf("Тактовая частота\n");
	scanf(" %d", &(*(*D + *n - 1)).chast);
	printf("Архитектура\n");
	scanf(" %s", &(*(*D + *n - 1)).arx);
	printf("Стоимость\n");
	scanf(" %d", &(*(*D + *n - 1)).stoimost);
}

struct pr *del(int art, int *n, struct proc *d)
{
	int k = 0;
	for (int i = 0; i < *n; i++)
	{
		if (d[i].art == art)
		{
			for (int j = i; j < *n; j++)
			{
				d[j] = d[j + 1];
				k += 1;
			}
			*n = *n - 1;
			d = (struct proc *)realloc(d, *n * sizeof(struct proc));
		}
	}
	if (k == 0)
	{
		printf("Процессор с таким артикулем  не существует\n");
	}
	if (k == 1)
	{
		printf("Процессор удален\n");
	}
	return d;
}

int tablic(int f, struct proc *d)
{
	if (f == 0)
		return 0;

	tablic(f - 1, d);
	printf("%d", f);
	printf("\n");

	printf("Отображение информации о процессорах\n\n");
	printf("|------------------------------------|------------------------|\n");
	printf("|         Таблица                    |       Процессоров      |\n");
	printf("|------------------------------------|------------------------|\n");
	printf("|Артикул процессора                  |%24d|\n", d[f - 1].art);
	printf("|Название процессора                 |%24s|\n", d[f - 1].name_p);
	printf("|Код производителя процессора        |%24d|\n", d[f - 1].made.code);
	printf("|Название фирмы-производител         |%24s|\n", d[f - 1].made.name);
	printf("|Страна                              |%24s|\n", d[f - 1].made.country);
	printf("|Телефон                             |%24d|\n", d[f - 1].made.tel);
	printf("|Разрядность                         |%24d|\n", d[f - 1].razr);
	printf("|Тактовая частота                    |%24d|\n", d[f - 1].chast);
	printf("|Архитектура                         |%24s|\n", d[f - 1].arx);
	printf("|Цена                                |%24d|\n", d[f - 1].stoimost);
	printf("|------------------------------------|------------------------|\n");
}

int razr_poisk(int r, int f, struct proc *d)
{
	if (f == 0)
	{
		return 0;
	}
	else
	{
		razr_poisk(r, f - 1, d);
		if (d[f - 1].razr == r)

		{

			printf("Артикул процессора - %d\n", d[f - 1].art);
			printf("Название процессора  -  %s\n", d[f - 1].name_p);
			printf("Код Производителя процессора - %d\n", d[f - 1].made.code);
			printf("Название фирмы-производителя - %s\n", d[f - 1].made.name);
			printf("Страна - %s\n", d[f - 1].made.country);
			printf("Телефон - %d\n", d[f - 1].made.tel);
			printf("Разрядность - %d\n", d[f - 1].razr);
			printf("Тактовая частота - %d\n", d[f - 1].chast);
			printf("Архитектура - %s\n", d[f - 1].arx);
			printf("Цена - %d\n\n", d[f - 1].stoimost);
		}
		else
		{
			puts("Процессор с такой разрядностью не существует\n");
		}
	}
}

int kolv(int tc, int f, struct proc *d)
{
	int k = 0;
	if (f == 0)
	{
		return k;
	}
	else
	{
		if ((d[f - 1].razr == 64) && (d[f - 1].chast == tc))
		{
			k = kolv(tc, f - 1, d) + 1;
		}
		else
		{
			k = kolv(tc, f - 1, d);
		}
	}
}

long int
filesize(FILE *fp)
{
	long int save_pos, size_of_file;

	save_pos = ftell(fp);
	fseek(fp, 0L, SEEK_END);
	size_of_file = ftell(fp);
	fseek(fp, save_pos, SEEK_SET);
	return (size_of_file);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");

	int r, tc, n = 0, k = 0, art, P;
	char f_name[250];
	FILE *save;
	d = (struct proc *)malloc(n * sizeof(struct proc));
	do
	{
		puts("\n\nМеню Программы");
		printf("\n");
		puts("1-Добавление информации о новом процессоре в конец массива ");
		puts("2-Удаление информации о процессоре по артикулу");
		puts("3-Отображение информации о процессорах в виде таблицы ");
		puts("4-Поиск информации о процессорах указанной разрядности");
		puts("5-Определениу количества 64-разрядных процессоров с указанной тактовой частотой");
		puts("6-Для выхода");
		puts("7-Запись в файл");
		puts("8-Чтение из файла\n\n");

		puts("Выберите пункт программы");
		scanf(" %d", &P);
		switch (P)
		{
		case 1:
			new_proc(&n, D);
			printf("\n");
			break;

		case 2:
			printf("Введите артикул удаляемого процессора\n");
			scanf(" %d", &art);
			del(art, &n, d);
			printf("\n");
			break;
		case 3:
			tablic(n, d);
			printf("\n");
			break;

		case 4:
			printf("Введите искомую разрядность\n");
			scanf("%d", &r);
			razr_poisk(r, n, d);
			break;

		case 5:
			printf("Введите искомую тактовую частоту\n");
			scanf("%d", &tc);
			printf("Результат: %d\n", kolv(tc, n, d));
			printf("\n");
			break;

		case 6:
			return 0;
			break;

		case 7:
		{
			printf("Введите путь к файлу и имя файлу: ");
			gets(f_name);
			gets(f_name);
			save = fopen(f_name, "wb");
			fwrite(&d[0], sizeof(struct proc), n, save);
			d = (struct proc *)realloc(d, n * sizeof(struct proc));
			fclose(save);
			break;
		}
		case 8:
		{
			printf("Введите путь к файлу и его имя: ");
			gets(f_name);
			gets(f_name);
			save = fopen(f_name, "rb");
			n = (filesize(save) / sizeof(struct proc));
			d = (struct proc *)realloc(d, n * sizeof(struct proc));
			fread(&d[0], sizeof(struct proc), n, save);
			fclose(save);
			break;
		}

		default:
			printf("ОШИБКА!!  Такого пункта меню не существует\n");
			printf("\n");
			break;
		}
	} while (P != 6);
}
