#include <stdio.h>
int main()
{
    int numeroUser = 0;

    printf("\n digite um numero:");
    scanf("%d", &numeroUser);

    if (numeroUser % 2 == 0)
    {
        printf("este numero e par");
    }
    else
    {
        printf("este numero e impar");
    }
    
    
    return 0;
}
