#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL,"rus");
	char ch;

    float k=0;
     float d1,d2;
		float osn1, osn2,h;
    	float res2;
    		float a,n, kv ;
        float res3 ;
        float res1 ;


 do{
    puts("\nПрограмма, вычисляющая площади Фигур. \n Выберите искомое.");
	puts ("R -Площадь ромба");
	puts ("T -Площадь треугольника");
    puts ("S -Площадь квадрата");
    puts ("E -Выход из программы");

       scanf(" %c", &ch);


  if (ch =='R'){
           printf("\nВведите длины диагоналей ромба\n");
           printf("Диагональ 1:\n");
           scanf("%f", &d1);
           printf("Диагональ 2:\n");
           scanf("%f", &d2);
           if(d1<=0){
          puts("ОШИБКА,НЕВЕРНО ВВЕДЕНО ЗНАЧЕНИЕ\n");
    	  }
    	  if (d2<=0){
    	  puts ("ОШИБКА,НЕВЕРНО ВВЕДЕНО ЗНАЧЕНИЕ\n");
    	  } else {
           res1=((d1+d2)*0.5);
           printf ("Площадь ромба = %.2f\n",res1);
           }
           }

           else if (ch =='T'){
            printf ("Введите основание и высоту треугольника\n");
            scanf(" %f %f",&a,&n );
    	    if(a<=0){
            puts("ОШИБКА,НЕВЕРНО ВВЕДЕНО ЗНАЧЕНИЕ\n");
    	    }
    	    if (n<=0){
    	    puts ("ОШИБКА,НЕВЕРНО ВВЕДЕНО ЗНАЧЕНИЕ\n");
    	    } else {
    	     res2 = 0.5*a*n;
    	    printf ("Площадь треугольника равна %.2f\n",res2);}
            }

             else if (ch =='S'){
               puts("Введите сторону квадрата");
               scanf("%f", &kv);
               if (kv<=0){
               puts("ОШИБКА,НЕВЕРНО ВВЕДЕНО ЗНАЧЕНИЕ\n");
               }
               else{
               res3 = kv*kv;
               printf ("Площадь квадрата = %.2f\n",res3);}
             }
            else if (ch =='E'){

			return 0;
            }
		else
			printf("Ошибка. Команда не найдена.\n");
		}



	while (n!='E');
		system("pause");
}












