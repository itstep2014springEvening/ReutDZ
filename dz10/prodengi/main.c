#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10000;
    double Va,Za,Vl;
    Za=a+(12.0*(a*0.13));
    Va=a+(7.0*(a*0.13));
    Vl=a+((5.0*(a*0.13))*2.0)*0.63;
    printf("DENGI Zakhara %g\n" "DENGI Ivana %g\n" "DENGI Vlada %g\n",Za,Va,Vl);
    return 0;
}
