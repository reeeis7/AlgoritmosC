#include <stdio.h>
int main()
{
int clima;
int dinheiro;

printf ("\n O clima esta bom? 1 para sim 2 para nao");
scanf("%d", &clima);
printf("\n Voce tem dinheiro? 1 para sim 2 para nao");
scanf("%d", &dinheiro);
if (clima == 1 && dinheiro == 1)
{
    printf("va para a sorveteria");
}
else if (clima == 2 && dinheiro == 1)
{
    printf("nao va para a sorveteria");
}
else if (clima == 1 && dinheiro == 2)
{
    printf("lhe falta dinheiro, esta liso");
}
else if (clima == 1 && dinheiro == 1)
{
    printf("va para a sorveteria");
}
    return 0;
}
