#include <stdio.h>

int main(){
    //declaraçao de variaveis
    int distancia = 0;
    float mediaEta = 0;
    float valorGas = 5.60;
    float valorEta = 3.40;
    float mediakmGas = 0;
    float mediakmEta = 0;

    printf ("\n Qual a distancia da sua viagem em km?");
      scanf ("%d", &distancia);

    printf ("\n Qual a media de KM por litro de gas do seu auto?");
      scanf ("%f", &mediakmGas);

    printf ("\n Qual a media de KM por litro de eta do seu auto?");
      scanf ("%f", &mediakmEta);

    //processamento
    float gastoGas = valorGas * distancia / mediakmGas;
    float gastoEta = valorEta * distancia / mediakmEta;
    //saida
    printf ("\n O total gasto foi de: %.2f", gastoGas);
    printf ("\n O total gasto foi de: %2.f", gastoEta);

return 0;
}