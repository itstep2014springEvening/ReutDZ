#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("vvedite luboe chslo\n");
    scanf("%d",&a);
    if (a%2!=0)
    {
        printf("ODD\n");
    }
    else
    {
        printf("EVEN");
    }
    return 0;
}
