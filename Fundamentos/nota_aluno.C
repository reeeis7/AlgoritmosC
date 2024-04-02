/*
Vamos calcular a sua nota
*/
 #include <stdio.h>
 int main(){
    int prova1 = 0;
    int prova2 = 0;

    printf("\n Digite a nota da prova 1");
    scanf("%d", &prova1);

    printf("\n Digite a nota da prova 2");
    scanf("%d", &prova2);

    float soma = prova1 + prova2;
    float media = soma / 2;
    printf("a media do aluno e: %.2f", media);

 return(0);
 }