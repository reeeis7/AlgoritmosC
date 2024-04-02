#include <stdio.h>

int main(){
float ladoQuadrado = 0;

//declaraçao de variaveis
printf("\n Quanto mede o lado do quadrado?");
    scanf("%f", &ladoQuadrado);

//processamento
float areaQuadrado = ladoQuadrado * ladoQuadrado;

//saida
printf("o valor da area do quadrado e: %.2f", areaQuadrado);   

return 0;



}