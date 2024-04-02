/*
Logradouro em linguagem C
*/
#include <stdio.h>
int main()
{
    int numero = 90;
    char cep[] = "13408-272";
    char bairro[] = "Colina Verde";
    char cidade[] = "Piracicaba";
    char estado[] = "Sao Paulo";
    char complemento[] = "portao cinza";

    printf("---Logradouro---");
    printf("\n Numero da casa: %d", numero);
    printf("\n Meu CEP: %s", cep);
    printf("\n Bairro: %s", bairro);
    printf("\n Cidade: %s", cidade);
    printf("\n Estado: %s", estado);
    printf("\n Complemento: %s", complemento);
     
     return 0;
}