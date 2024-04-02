#include<stdio.h>
int main()
{
float nota1 = 0.0; 
float nota2 = 0.0;   

  printf("\n Digite sua primeira nota:");
scanf("%f", &nota1);
  printf("\n Digite sua segunda nota:");
scanf("%f", &nota2);

float media = (nota1 + nota2) / 2;

if (media>=6)
{
  printf("voce esta aprovado, sua media: %.2f", media);
}
else
{
  printf("voce esta reprovado, sua media: %.2f", media);
}
return 0;
}