#include <stdio.h>
int main(){
    char chocolate[] ="charge";
    char doritos[]="doritos";
    char coca[] = "coca";
     
     float valorCharge = 2.99;
     float valorDoritos = 13.99;
     float valorCoca = 9.99;

     float totalLista = valorCharge + valorCoca + valorDoritos;
     printf("o valor total da lista e: %.2f", totalLista);

     return 0;
}