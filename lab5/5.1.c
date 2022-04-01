#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

int main()
{ 	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	setlocale(LC_ALL,"rus");
        int n, x, y, i, j, min, tmin, *mass;
        n=5;
        mass = (int*)malloc(n*sizeof(int));
        srand(time(NULL));
        for(i = 0; i < n; i++)
                *(mass+i)= 100*(int)rand() / RAND_MAX;




enum Menu {Z1,Z2,Z3,Z4,Z5,Z6,Z7} M;
do {
        printf("\n");
        puts("---------------------Меню--------------------\n");
        puts("1 - Добавление элемента в указанную позицию");
        puts("2 - Удаление последнего элемента массива");
        puts("3 - Отображение значений элементов массива");
        puts("4 - Очистка массива");
        puts("5 - Поиск указанного пользователем элемента");
        puts("6 - Сортировка элементов массива по возрастанию");
        puts("7 - Выход");
        puts("---------------------Меню--------------------\n");
        printf("Выберите пункт программы\n");
        scanf("%d", &M);
        printf("\n");
        switch(M) {
        case 1: {
        printf("Выберите позицию и значение: pos, znach\n");
        scanf("%d%d", &x,&y);
        n=n+1;
        if(x>n+1){printf("error\n"); break;}
        mass = (int*) realloc(mass,n*sizeof(int));
        for(i = 0; i < n-x; i++){*(mass+n-i-1)=*(mass+n-i-2);}
        *(mass+x-1)=y;
        for(i = 0; i < n; i++)
        printf("%d ",*(mass+i));
        printf("\n");
        break;
        }
        case 2: {

        n=n-1;
        mass=(int*)realloc(mass,n*sizeof(int));
        printf("Удалено:\n");

        for(i = 0; i < n; i++)
        printf("%d ",*(mass+i));
        printf("\n");
        }
        case 3: {
        for(i = 0; i < n; i++)
        printf("%d ",*(mass+i));
        printf("\n");
        break;}
        case 4: {
        n=0;
        mass=(int*)realloc(mass,n*sizeof(int));
        printf("Очищено:\n");
         for(i = 0; i < n; i++)
        printf("%d ",*(mass+i));
        printf("\n");
        break;}
        case 5:
        printf("Поиск: ");
        scanf("%d",&y);
        for(i = 0; i < n; i++)
        {if(y==*(mass+i)){x=i; break;}}
        if (i==n){printf("\nНе найдено\n");} else {printf("\nНомер %d\n",x+1);}
        break;

        case 6:
        for(i = 0; i < n; i++){
        min=*(mass+i);
        for(j = i+1; j < n; j++){
        if (min>*(mass+j)){tmin=min; min=*(mass+j); *(mass+j)=tmin;}
        *(mass+i)=min;
        }
        }
        printf("Отсортировано:\n");
         for(i = 0; i < n; i++)
        printf("%d ",*(mass+i));
        printf("\n");
        break;

        case 7:
        exit(0);
        break;

        default:
        printf("error\n\n");

}
        }
        while(1==1);
        free(mass);
}













