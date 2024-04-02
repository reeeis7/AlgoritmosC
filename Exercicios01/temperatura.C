#include <stdio.h>
int main()
{
    float temperatura = 0;

    printf("\n Digite a temperatura no seu ambiente em graus celcius:");
    scanf("%f", &temperatura);

    if (temperatura<=13)
    {
      printf("esta frio!");  
    }
    else if (temperatura>13 && temperatura<=25)
{
    printf("clima agradavel!");
}
else if (temperatura>25 && temperatura <=32)
{
    printf("esta calor!");
}
else if (temperatura>32)
{
    printf("esta muito calor!");
}

    return 0;
}
