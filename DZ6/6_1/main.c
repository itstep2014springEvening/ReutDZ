#include <stdio.h>
 #include <stdlib.h>
//���
 int main()
 {
     int a, b;
     printf("Vvedite chislo a ");
     scanf ("%d", &a);
     printf("Vvedite chislo b ");
     scanf ("%d", &b);
     while (a>0 && b>0) //���� a ������ ���� � b ������ ����
     {
         (a>b? (a=a%b):(b=b%a)); //���� a>b �� ���� ������� �� ������� a �� b ��� ���� ������� �� ������� b �� a
     }
     printf ("GCD=%d", a+b); //������� ��� ������� ����� a+b  �� �������...�� ������������ ��� �� ����������
     return 0;
 }
