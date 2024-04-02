#include<stdio.h>
int main(int argc, char const *argv[])
{
int idade = 0;
printf("digite sua idade:");
scanf("%d", &idade);
if (idade>=18)
{
    printf("ok, voce e de maior!");
}
else
{
    printf("voce é de menor");
}

    return 0;
}
