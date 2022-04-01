#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{ setlocale(LC_ALL,"rus");
int a, b, c;
printf ("Пример №1\n");
printf ("Ввод a и b для выражения 3*a++<b \n");
scanf ( "%d %d", &a, &b );
c = 3*a++<b;
printf("Значение Выражаения : %d\n",c);

printf ("Пример №2\n");
printf ("Ввод a и b для выражения ++b*++a*3; \n");
scanf ( "%d %d", &a, &b );
c = ++b*++a*3;
printf("Значение Выражаения : %d\n",c);

printf ("Пример №3\n");
printf ("Ввод a и b для выражения a*b>=b--; \n");
scanf ( "%d %d", &a, &b );
c = a*b>=b--;
printf("Значение Выражаения : %d\n",c);

printf ("Пример №4\n");
printf ("Ввод a и b для выражения a —>> b++ \n");
scanf ( "%d %d", &a, &b );
c = (a-- >> b++);
printf("Значение Выражаения : %d\n",c);

printf ("Пример №5\n");
printf ("Ввод a и b для выражения ) (a | b) && (a | b) \n");
scanf ( "%d %d", &a, &b );
c = (a | b) && (a | b);
printf("Значение Выражаения : %d\n",c);

printf ("Пример №6\n");
printf ("Ввод a и b для выражения ) ~a % —b \n");
scanf ( "%d %d", &a, &b );
c = ~a % -b;
printf("Значение Выражаения : %d\n",c);

return 0;
}
