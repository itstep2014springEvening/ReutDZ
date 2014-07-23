#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=0,c=0;
    printf("vvedite a b c\n");
    scanf("%d %d %d",&a,&b,&c);
    if ((a+b)>c)
        printf("(a+b)>c\n");
    else
        printf("(a+b)<c");
    return 0;
}
