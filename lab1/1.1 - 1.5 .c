#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{ setlocale(LC_ALL,"rus");
int a, b, c;
printf ("������ �1\n");
printf ("���� a � b ��� ��������� 3*a++<b \n");
scanf ( "%d %d", &a, &b );
c = 3*a++<b;
printf("�������� ���������� : %d\n",c);

printf ("������ �2\n");
printf ("���� a � b ��� ��������� ++b*++a*3; \n");
scanf ( "%d %d", &a, &b );
c = ++b*++a*3;
printf("�������� ���������� : %d\n",c);

printf ("������ �3\n");
printf ("���� a � b ��� ��������� a*b>=b--; \n");
scanf ( "%d %d", &a, &b );
c = a*b>=b--;
printf("�������� ���������� : %d\n",c);

printf ("������ �4\n");
printf ("���� a � b ��� ��������� a �>> b++ \n");
scanf ( "%d %d", &a, &b );
c = (a-- >> b++);
printf("�������� ���������� : %d\n",c);

printf ("������ �5\n");
printf ("���� a � b ��� ��������� ) (a | b) && (a | b) \n");
scanf ( "%d %d", &a, &b );
c = (a | b) && (a | b);
printf("�������� ���������� : %d\n",c);

printf ("������ �6\n");
printf ("���� a � b ��� ��������� ) ~a % �b \n");
scanf ( "%d %d", &a, &b );
c = ~a % -b;
printf("�������� ���������� : %d\n",c);

return 0;
}
