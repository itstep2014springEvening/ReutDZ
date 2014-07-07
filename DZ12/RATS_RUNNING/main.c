#include <stdio.h>
#include <stdlib.h>

int main()
{
    int VanyaSpeed,VladSpeed,S;
    double VladUstal,IvanUstal,VladUstalspeed,IvanUstalspeed,tIvan,tVlad;
    printf("VVEDITE SKOROST' IVANA\n");
    scanf("%d",&VanyaSpeed);
    printf("VVEDITE SKOROST' VLADA\n");
    scanf("%d",&VladSpeed);
    printf("VVEDITE RASSTOYANIE\n");
    scanf("%d",&S);

    IvanUstal=S*0.63;
    VladUstal=S*0.57;

    printf("IVAN USTANET CHEREZ %g METROV\n",IvanUstal);
    printf("VLAD USTANET CHEREZ %g METROV\n\n\n", VladUstal);

    IvanUstalspeed=VanyaSpeed*0.3;
    VladUstalspeed=VladSpeed*0.28;

    printf("IVAN USTAL I BEJIT %g M/C\n",IvanUstalspeed);
    printf("VLAD USTAL I BEJIT %g M/C\n\n\n",VladUstalspeed);

    tIvan=(S-IvanUstal)/IvanUstalspeed;
    tVlad=(S-VladUstal)/VladUstalspeed;
    printf("IVAN PRIBEJIT CHEREZ %g SEKUND\n",tIvan);
    printf("VLAD PRIBEJIT CHEREZ %g SEKUND\n\n\n",tVlad);

    if (tIvan>tVlad)

        printf("VLAD - CHAMPION!!!");

    else
        printf("IVAN - CHAMPION!!!");

        return 0;
}
