#include<stdio.h>
int main(int argc, char const *argv[])
{
    float nota1 = 0.0;
    float nota2 = 0.0;
    int faltas = 0;

    printf("\n Digite sua primeira nota:");
scanf("%f", &nota1);
  printf("\n Digite sua segunda nota:");
scanf("%f", &nota2);
  printf("\n Digite seu numero de faltas");
  scanf("%d", &faltas);

float media = (nota1+nota2) / 2;
if (media >= 6.0 && faltas <= 4)
{
    printf("voce esta aprovado com media %.2f", media);
}
else if ( media < 6.0 && faltas <= 4)
{
    printf("voce esta reprovado pela media %.2f", media);
}
else if ( media >= 6.0 && faltas > 4)
{
    printf ("voce esta reprovado por conta das faltas %d", faltas);
}

     

    return 0;
}
