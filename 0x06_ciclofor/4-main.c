#include <stdio.h>

int main ()
{
    int n, numeros;
    
    printf("Ingrese un número\n");
    scanf("%d",&n);
    printf("Los numeros pares son:");
    for(numeros = 1; numeros<=n; numeros++)
    {
        if(numeros%2 == 0 )
        {
        printf(" %d\n ",numeros);
        }
    }
    return(0);
}