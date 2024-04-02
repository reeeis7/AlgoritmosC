/*exemplo de algoritmo com declaração de variaveis em C
*/

#include <stdio.h>
int main()
{
  int idade = 16;
  float altura = 1.80;
  char *letra = "G";
  char nome[] = "Gabriel";
  printf("---Meus dados pessoais---");
  printf("\nMeu nome: %s", nome);
  printf("\nMinha letra inicial: %s", letra);
  printf("\nMinha idade: %d", idade);
  printf("\nMinha altura %.2f\n", altura);

    return 0;
}


