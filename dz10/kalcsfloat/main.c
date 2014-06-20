#include <stdio.h>
#include <stdlib.h>

int main()
{
float a=0,b=0,c=0;

printf("a\n");
scanf("%f",&a);
printf("b\n");
scanf("%f",&b);
printf("c\n");
scanf("%f",&c);
printf ("%.f + %.f + %.f = %.f\n", a, b,c, a+b+c);
printf ("%.f - %.f - %.f = %.f\n", a, b,c, a-b-c);
printf ("%.f / %.f / %.f = %.3f\n", a, b,c, a/b/c);
printf ("%.f * %.f * %.f = %.f\n", a, b,c, a*b*c);

return 0;
}
