#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("vvedite delimoe\n");
    scanf("%d",&a);
    printf("vvedite delitel\n");
    scanf("%d",&b);
    if (a%b==0)

        printf("%d",a/b);

    else

        printf("error");
return 0;
}
