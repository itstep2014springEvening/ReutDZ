#include <stdio.h>
#include <stdlib.h>

int main()
{
int n, a, b;
printf ("kolichestvo chisel >");
scanf ("%d", &n);
for (b=0; n>0; b=b+a)
{
printf ("Vvedide chislo >");
scanf ("%d", &a);
n=n-1;
}

if (b<100)
printf("summa menshe 100");
else
printf("summa bolshe 100");
return 0;
}
