#include <stdio.h>
 #include <stdlib.h>
//нод
 int main()
 {
     int a, b;
     printf("Vvedite chislo a ");
     scanf ("%d", &a);
     printf("Vvedite chislo b ");
     scanf ("%d", &b);
     while (a>0 && b>0) //пока a больше нуля и b больше нуля
     {
         (a>b? (a=a%b):(b=b%a)); //если a>b то берём остаток от деления a на b или берём остаток от деления b на a
     }
     printf ("GCD=%d", a+b); //выводим НОД который равен a+b  не понятно...на калькуляторе так не получается
     return 0;
 }
