#include<stdio.h>
int main()
{
    float altura = 0;
    float peso = 0;

      printf("\n Digite sua altura em m");
      scanf ("%f", &altura);

      printf("\n Digite seu peso em kg");
      scanf ("%f", &peso); 
    float imc = peso / (altura*altura);
      printf ("Seu IMC é de: %.2f", imc );
    return 0;
}
