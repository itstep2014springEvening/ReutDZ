#include <stdio.h>
 #include <stdlib.h>
//������� � ��������
 int main()
 {
     int n, m, a, min=0, max=0;
     printf ("Vvedite n \n"); //������ ���������� �����
     scanf ("%d", &n);
     m=n; //��� ���� ��� �� ����� ���� ����������
     for (n; n>0; --n) //������� ������� ��������� n �� ���� � �������� ������ ��� ������� �����
     {
         printf ("Vvedite chislo ");
         scanf ("%d", &a);
         max=(a>max?a:(m>n?max:a)); //��� �� ��������� �������� �� ��������� �� �������
         min=(a<min?a:(m>n?min:a)); //�� ������� ��� ���������� ��� min � ��� max
     }
     printf ("max=%d\nmin=%d", max, min);  //����� max � min � ������ �������
     return 0;
 }
