#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Menu
{
    Z1,
    Z2,
    Z3,
    Z4,
    Z5,
    Z6,
    Z7,
    Z8,
    Z9
} P;

int main()
{
    setlocale(LC_ALL, "rus");
    char str[100];
    char s[100];
    char s5[100];
    char s6[100];
    char probel[] = " ";
    char *s4;
    char *s2 = NULL;
    int i, j, countp, counts, n, min, len_s4, length, count_brackets=0, count_books;
    FILE *f = NULL, *f1 = NULL, *f2 = NULL;
    do
    {
        printf("\n");
        puts("����");
        puts("1 - �������� ����� � ����");
        puts("2 - ���������� ���������� ����� � �����");
        puts("3 - ���������� ���������� ������ ���������� � �����;");
        puts("4 - ���������� ����� �������� ����� � �����");
        puts("5 - ����������� �������� ������������ ����������� ������� ������");
        puts("6 - ��������� � ������ ����� ����, ��������� �� 3 ���� � �������� �����");
        puts("7 - ������� �� ����� ���������� �����");
        puts("8 - �����");
        printf("\n�������� �����: ");
        scanf("%d", &P);
        printf("\n");
        switch (P)
        {
        case 1:
        {
            printf("������� �����: ");
            gets(s);
            gets(s);
            f = fopen("file.txt", "a");
            for (i = 0; i < strlen(s); i++)
                fputc(s[i], f);
            fclose(f);
            break;
        }

        case 2:
        {
            f = fopen("file.txt", "r");
            counts = 0;
            while (fgets(s, 100, f))
            {
                length = strlen(s);
                for (i = 0; i < length; ++i)
                {
                    if (s[i] == '\n')
                    {
                        counts++;
                    }
                }
            }
            fclose(f);
            printf("���������� ����� � ����� = %d\n", counts);
            break;
        }

        case 3:
        {
            f = fopen("file.txt", "r");
            countp = 0;
            while (fgets(s, 100, f))
            {
                length = strlen(s);
                for (i = 0; i < length; ++i)
                {
                    if (ispunct(s[i]))
                    {
                        countp++;
                    }
                }
            }

            fclose(f);
            printf("���������� ������ � ����� = %d\n", countp);
            break;
        }

        case 4:
        {

            f = fopen("file.txt", "r");
            while (fgets(str, 100, f))
            {
                s4 = strtok(str, probel);
                while (s4 != NULL)
                {
                    length = strlen(s4);
                    if (min > strlen(s4))
                    {
                        s2 = strdup(s4);
                        min = length;
                    }
                    s4 = strtok(NULL, probel);
                }
            }
            fclose(f);
            printf("����� �������� �����: %s", s2);
            break;

            break;
        }

        case 5:
        {
            f = fopen("file.txt", "r");
            while (fgets(s5, 100, f))
            {
                for (i = 0; i < strlen(s5); i++)
                {
                    if (s5[i] == "(")
                        count_brackets++;
                    if (s5[i] == ")")
                        count_brackets--;
                    if (count_brackets < 0)
                        printf("������ ����������� �������");
                }
            }
            if (count_brackets == 0)
            {
                printf("������ ����������� �����");
            }
            else
            {
                printf("������ ����������� �������");
            }
            break;
        }

        case 6:
            f = fopen("file.txt", "r");
            f1 = fopen("file1.txt", "w+");
            while (fgets(str, 100, f))
            {
                s4 = strtok(str, probel);
                while (s4 != NULL)
                {
                    if (strlen(s4) == 3)
                    {
                        fprintf(f1, "%s " , s4);
                    }
                    s4 = strtok(NULL, probel);
                }
            }
            fclose(f);
            fclose(f1);
            break;
        case 7:
            f = fopen("file.txt", "r");
            while ((s[i] = fgetc(f)) != EOF)
            {
                if (s[i] == '\n')
                {
                    s[i] = '\0';
                    printf("%s\n", s);
                    i = 0;
                }
                else
                    i++;
            }
            s[i] = '\0';
            
            printf("%s\n", s);
            fclose(f);
            break;

        case 8:
            return 0;
            break;

        default:
            printf("error\n\n");
        }
    } while (P != 8);
}
