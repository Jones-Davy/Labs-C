#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL,"rus");
	char ch;
     float d1,d2;
		float osn1, osn2,h;
    	float res2;
    		float a,n, kv ;
        float res3 ;
        float res1 ;
         int exit = 0 ;


 while (ch!='E'){
    puts("���������, ����������� ������� �����. \n �������� �������.");
	puts ("R -������� �����");
	puts ("T -������� ������������");
    puts ("S -������� ��������");
    puts ("E -����� �� ���������");

       scanf(" %c", &ch);
       switch (ch) {

           case ('R'):
           printf("\n������� ����� ���������� �����\n");
           printf("��������� 1:\n");
           scanf("%f", &d1);
           printf("��������� 2:\n");
           scanf("%f", &d2);
           if(d1<=0){
          puts("������,������� ������� ��������\n");
    	  }
    	  if (d2<=0){
    	  puts ("������,������� ������� ��������\n");
    	  } else {
           res1=((d1+d2)*0.5);
           printf ("������� ����� = %.2f\n",res1);}
           break;

             case('T'):
            printf ("������� ��������� � ������ ������������\n");
            scanf(" %f %f",&a,&n );
    	    if(a<=0){
            puts("������,������� ������� ��������\n");
    	    }
    	    if (n<=0){
    	    puts ("������,������� ������� ��������\n");
    	    } else {
    	     res2 = 0.5*a*n;
    	    printf ("������� ������������ ����� %.2f\n",res2);}
    	    break;

               case('S'):
               puts("������� ������� ��������");
               scanf("%f", &kv);
               if (kv<=0){
               puts("������,������� ������� ��������\n");
               }
               else{
               res3 = kv*kv;
               printf ("������� �������� = %.2f\n",res3);}
                break;

                  case'E':
     exit = 1 ;
       	          return 0;
       	          break;
       	            default:
       		        printf ("������ ������ ���!\n��������� �����.\n");
        }

system("pause");
}







         }














