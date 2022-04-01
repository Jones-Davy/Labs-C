

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
	printf("������� ������ � %d ����������:\n", *n);
	printf("������� ����������\n");
	scanf(" %d", &(*(*D + *n - 1)).art);
	printf("�������� ����������\n");
	scanf(" %s", &(*(*D + *n - 1)).name_p);
	printf("��� �����-������������� ����������\n");
	scanf(" %d", &(*(*D + *n - 1)).made.code);
	printf("�������� �����-�������������\n");
	scanf(" %s", &(*(*D + *n - 1)).made.name);
	printf("������\n");
	scanf(" %s", &(*(*D + *n - 1)).made.country);
	printf("�������\n");
	scanf(" %d", &(*(*D + *n - 1)).made.tel);
	printf("�����������\n");
	scanf(" %d", &(*(*D + *n - 1)).razr);
	printf("�������� �������\n");
	scanf(" %d", &(*(*D + *n - 1)).chast);
	printf("�����������\n");
	scanf(" %s", &(*(*D + *n - 1)).arx);
	printf("���������\n");
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
		printf("��������� � ����� ���������  �� ����������\n");
	}
	if (k == 1)
	{
		printf("��������� ������\n");
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

	printf("����������� ���������� � �����������\n\n");
	printf("|------------------------------------|------------------------|\n");
	printf("|         �������                    |       �����������      |\n");
	printf("|------------------------------------|------------------------|\n");
	printf("|������� ����������                  |%24d|\n", d[f - 1].art);
	printf("|�������� ����������                 |%24s|\n", d[f - 1].name_p);
	printf("|��� ������������� ����������        |%24d|\n", d[f - 1].made.code);
	printf("|�������� �����-������������         |%24s|\n", d[f - 1].made.name);
	printf("|������                              |%24s|\n", d[f - 1].made.country);
	printf("|�������                             |%24d|\n", d[f - 1].made.tel);
	printf("|�����������                         |%24d|\n", d[f - 1].razr);
	printf("|�������� �������                    |%24d|\n", d[f - 1].chast);
	printf("|�����������                         |%24s|\n", d[f - 1].arx);
	printf("|����                                |%24d|\n", d[f - 1].stoimost);
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

			printf("������� ���������� - %d\n", d[f - 1].art);
			printf("�������� ����������  -  %s\n", d[f - 1].name_p);
			printf("��� ������������� ���������� - %d\n", d[f - 1].made.code);
			printf("�������� �����-������������� - %s\n", d[f - 1].made.name);
			printf("������ - %s\n", d[f - 1].made.country);
			printf("������� - %d\n", d[f - 1].made.tel);
			printf("����������� - %d\n", d[f - 1].razr);
			printf("�������� ������� - %d\n", d[f - 1].chast);
			printf("����������� - %s\n", d[f - 1].arx);
			printf("���� - %d\n\n", d[f - 1].stoimost);
		}
		else
		{
			puts("��������� � ����� ������������ �� ����������\n");
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
		puts("\n\n���� ���������");
		printf("\n");
		puts("1-���������� ���������� � ����� ���������� � ����� ������� ");
		puts("2-�������� ���������� � ���������� �� ��������");
		puts("3-����������� ���������� � ����������� � ���� ������� ");
		puts("4-����� ���������� � ����������� ��������� �����������");
		puts("5-����������� ���������� 64-��������� ����������� � ��������� �������� ��������");
		puts("6-��� ������");
		puts("7-������ � ����");
		puts("8-������ �� �����\n\n");

		puts("�������� ����� ���������");
		scanf(" %d", &P);
		switch (P)
		{
		case 1:
			new_proc(&n, D);
			printf("\n");
			break;

		case 2:
			printf("������� ������� ���������� ����������\n");
			scanf(" %d", &art);
			del(art, &n, d);
			printf("\n");
			break;
		case 3:
			tablic(n, d);
			printf("\n");
			break;

		case 4:
			printf("������� ������� �����������\n");
			scanf("%d", &r);
			razr_poisk(r, n, d);
			break;

		case 5:
			printf("������� ������� �������� �������\n");
			scanf("%d", &tc);
			printf("���������: %d\n", kolv(tc, n, d));
			printf("\n");
			break;

		case 6:
			return 0;
			break;

		case 7:
		{
			printf("������� ���� � ����� � ��� �����: ");
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
			printf("������� ���� � ����� � ��� ���: ");
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
			printf("������!!  ������ ������ ���� �� ����������\n");
			printf("\n");
			break;
		}
	} while (P != 6);
}
