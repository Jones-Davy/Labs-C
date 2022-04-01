#include <stdio.h>
#include <locale.h>
#include <math.h>


int main()
{
setlocale(LC_ALL,"rus");

float e=2.72, m, n, x, y, F, r;
printf("enter n, m, x, y\n");
scanf("%f %f %f %f", &n, &m, &x, &y);
r = fabs (cos(x));
r = pow (r, 1/n);
if ((pow(x, pow (n,m)) + y*r) >= 0) F=(sqrt(pow(x, pow (n,m)) + y*r)
+ (4*m/(pow(e, pow(m,n)))));
printf ("Результат равен : %.2f\n,F ",F );
if ( (pow(x, pow (n,m)) + y*r) < 0 ) puts("ОШИБКА");
return 0;
}
