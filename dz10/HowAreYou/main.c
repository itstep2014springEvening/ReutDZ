#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c;
char z;
printf("> ");
scanf("%c",&z);
switch (z)
{
case '1':
printf("HOW ARE YOU");
break;

case '2':

printf("BYE-BYE USER");
break;

case '0':

break;

default:
printf("WAT?");
}

return 0;
}
