#include<stdio.h>
int main()
{
float temperaturaC = 0;

printf ("\n Digite a temperatura atual em graus Celcius");
scanf ("%f", &temperaturaC);

float temperaturaF = (temperaturaC * 9/5) + 32;

printf ("\n Esta e a temperatura em Fahrenheit: %.2f", temperaturaF);


    return 0;
}
