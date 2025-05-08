#include<stdio.h>

int main()
{
    int numero;
    int i;
    int sumatoria=0; 

    printf(" SUMA DE GAUSS\n");
    printf("Escriba el numero para realizar la suma de Gauss:\n");
    scanf("%d", &numero);
    printf("Su numero es: %d\n",numero);

    for (i = 1; i <= numero; i++);
    {
        sumatoria = sumatoria+i;
    }

    printf("El resultado de la suma de Gauss es: %d",sumatoria);
    return 0; 

}
