#include <stdio.h>

int main()
{
    int tam, temp, total = 0;
    scanf("%d", &tam);
    int vet[tam];
    for (int i = 0; i < tam, i++)
    {
        scanf("%d", &temp);
        total += temp;
    }
    printf("%d\n", total);
    return 0;
}