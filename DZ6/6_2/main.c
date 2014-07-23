#include <stdio.h>
 #include <stdlib.h>
 //нок
 int main()
 {
     int a, b, lcm;
     printf("Vvedite chislo a ");
     scanf ("%d", &a);
     printf("Vvedite chislo b ");
     scanf ("%d", &b);
     lcm=a*b; //lcm присваеваем значение a*b
     while (a!=b) //пока a не равно b
     {
         (a>b?(a=a-b):(b=b-a)); //a>b?если да то a=a-b а иначе b=b-a  НЕПОНЯТНО ЗАЧЕМ ЭТО НУЖНО
     }
     if (a=b) //если a=b
     {
         lcm=lcm/a; //lcm делим на a
     }
     printf ("LCM=%d", lcm);  //
     return 0;
 }
