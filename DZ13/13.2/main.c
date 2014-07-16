#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=0;
    printf("vvedite a\n");
    scanf("%d",&a);
    printf("vvedite b\n");
    scanf("%d",&b);
    if (a%b!=0)
        printf("A ne delitsya na B\n\n");
    else
        printf("A delitsa na B\n\n");
    if (b%a!=0)

        printf("B ne delitsya na A\n");
    else
        printf("B delitsa na A\n");

    return 0;
}
