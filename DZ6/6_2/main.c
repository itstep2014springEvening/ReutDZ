#include <stdio.h>
 #include <stdlib.h>
 //���
 int main()
 {
     int a, b, lcm;
     printf("Vvedite chislo a ");
     scanf ("%d", &a);
     printf("Vvedite chislo b ");
     scanf ("%d", &b);
     lcm=a*b; //lcm ����������� �������� a*b
     while (a!=b) //���� a �� ����� b
     {
         (a>b?(a=a-b):(b=b-a)); //a>b?���� �� �� a=a-b � ����� b=b-a  ��������� ����� ��� �����
     }
     if (a=b) //���� a=b
     {
         lcm=lcm/a; //lcm ����� �� a
     }
     printf ("LCM=%d", lcm);  //
     return 0;
 }
