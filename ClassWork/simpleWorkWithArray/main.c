#include <stdio.h>
#include <stdlib.h>

void output(int a[], int size);


void input(int a[], int size);

int main()
{
    //int a[10];// Просто объявление массива на 10 элементов
    //int a[4]={3,-5,3,7};// Объявление с и нициализацией (в узком смысле)
    const int N = 10000;
    int a[N];
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    input(a, n);// Вызов функции input, которая вводит массив с клавиатуры
    output(a, n);
    return 0;
}

void output(int a[], int size)
{
    for( int i=0; i<size; ++i)
    {
        printf("%d ",a[i]);

    }
    printf("\n");

}




void input(int a[], int size)
{
    printf("Enter %d elements of array.\n", size);
    for(int i=0; i<size; ++i)
    {
        scanf("%d", &a[i]);
    }
}
