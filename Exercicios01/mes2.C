#include<stdio.h>
int main()
{
    int numeroMes;
    
    printf("digite o numerodo mes");
    scanf("%i", &numeroMes);

    switch (numeroMes)
    {
    case 1:
        printf("estamos no mes de janeiro");
        break;
    case 2:
        printf("estamos em fevereiro");
        break;
     default:
     printf("numero invalido");
        break;
    }

    return 0;
}
