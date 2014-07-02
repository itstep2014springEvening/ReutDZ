#include <stdio.h>
#include <stdlib.h>

int main()
{
    int VanyaSpeed,VladSpeed;
    double VladUstal,IvanUstal,S;
    printf("VVEDITE SKOROST' IVANA\n");
    scanf("%d",&VanyaSpeed);
    printf("VVEDITE SKOROST' VLADA\n");
    scanf("%d",&VladSpeed);
    printf("VVEDITE RASSTOYANIE\n");
    scanf("%d",&S);

    VladUstal = S/VanyaSpeed;
    IvanUstal = S/VladSpeed;
    printf("%lg",VladUstal);
    printf("%lg",IvanUstal);





















    return 0;
}
