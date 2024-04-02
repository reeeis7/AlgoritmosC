#include<stdio.h>
int main()
{
int numeroMes;

    printf("digite o numero do mes");
    scanf("%d", &numeroMes);

if (numeroMes==1)
{
    printf("estamos em janeiro");
}
else if (numeroMes==2)
{
    printf("estamos em fevereiro");
}
else if (numeroMes==3)
{
    printf("estamos em março");
}
else if (numeroMes==4)
{
    printf("estamos em abril");
}
else if (numeroMes==5)
{
    printf("estamos em maio");
}
else if (numeroMes==6)
{
    printf("estamos em julho");
}
else if (numeroMes>=13)
{
    printf("o ano so vai ate dezembro");
}
    return 0;
}
