#include <stdio.h>
int main(){

float percentualAumento = 0.12;
float salario = 0;

printf ("Qual seu salario atual?");
scanf ("%f", &salario);

float novoSalario = (salario * percentualAumento) + salario;
printf ("Seu novo salario e de: %.2f", novoSalario);

return 0;



}
 