#include <stdio.h>

int main()
{
    int tam, aux, total = 0;
    scanf("%d", &tam);
    int vet[tam];
    for (int i = 0; i < tam, i++)
    {
        scanf("%d", &aux);
        total += aux;
    }
    printf("%d\n", total);
    return 0;
}