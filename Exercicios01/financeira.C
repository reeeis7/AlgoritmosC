#include <stdio.h>
#include <stdbool.h>
int main()
{
 int parcelas = 0;
 float valorImovel = 0;
 char valorParcelas;

  printf ("\n Ola somos uma financeira, em quantas parcelas que pagar seu imovel:");
    scanf ("%d", &parcelas);
  
  printf ("\n Qual o valor do seu imovel:");
    scanf ("%f", &valorImovel);

 float  valorParcelas = valorImovel / parcelas;
 
  printf ("\n Esse e o valor da sua parcela: %.2f", valorParcelas);
 
   
    return 0;
}
