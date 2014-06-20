#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("vvedite a\n");
    scanf("%d",&a);
    printf("vvedite b\n");
    scanf("%u",&b);
    printf("%d - %d =%d\n", a,b,a-b);
    printf("%d + %d =%d\n", a,b,a+b);
    printf("%d * %d=%d\n", a,b, a*b);


    if (b==0)
    {
        printf("delenie nevozmojno\n");
    }
    else
        printf("%d / %d=%d\n",a,b,a/b);
    if(b==0)
    {
        printf("delenie nevozmojno\n");
    }
    else
        printf("%d %% %d =%d\n", a,b,a%b);



    return 0;
}
