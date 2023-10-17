#include <stdio.h>

int main() {
    int minimo = 2;
    int maximo = 200;
    int x=2;
    int pares;
    printf("EL PROGRAMA MOSTRAR LOS NUMEROS PARES ENTRE 20 Y 200: \n");
    do
    {
        pares = x%2;
        if (pares == 0)
        {
           printf("Numero par: %d\n", x);
        }
        x++;
    } while (x<=200 && x>=2);
    
    
    return 0;
}
