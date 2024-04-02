#include <stdio.h>

int main(){
    //declaração de variáveis
float raio = 0;
float pi = 3.14;

//declaraçao de variaveis
printf("\n Quanto mede o raio do circulo?");
    scanf("%f", &raio);

//processamento
float areaCirculo = pi * (raio * raio);


//saida
printf("o valor da area do circulo e: %.2f", areaCirculo);   

return 0;



}