#include<stdio.h>
int main()
{
float reais = 0;

printf ("\n Digite quantos reais voce tem:");
scanf ("%f", &reais);
 float dolars = reais * 5;
printf ("\n Esse e o valor convertido: %.2f", dolars);

    return 0;
}
