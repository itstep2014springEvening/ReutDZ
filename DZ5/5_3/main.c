#include <stdio.h>
 #include <stdlib.h>
//минимум и максимум
 int main()
 {
     int n, m, a, min=0, max=0;
     printf ("Vvedite n \n"); //вводим количество чисел
     scanf ("%d", &n);
     m=n; //это надо что бы можно было сравнивать
     for (n; n>0; --n) //счётчик который уменьшает n до нуля и печатает каждый раз введите число
     {
         printf ("Vvedite chislo ");
         scanf ("%d", &a);
         max=(a>max?a:(m>n?max:a)); //тут всё запутанно хотелось бы разобрать на занятии
         min=(a<min?a:(m>n?min:a)); //но понятно что выясняется кто min а кто max
     }
     printf ("max=%d\nmin=%d", max, min);  //вывод max и min в разных строках
     return 0;
 }
