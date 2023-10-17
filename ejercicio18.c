#include<stdio.h>

int menor, mayor;
int MULTIPLO = 5;

int main()
{
    printf("PROGRAMA QUE LEE DOS NUMEROS Y MUESTRA LOS MULTIPLOS DE 5 ENTRE ELLOS: \n");
    scanf("%d", &menor);
    printf("\n");
    scanf("%d", &mayor);
    printf("Sus numeros son %d y %d", menor, mayor);
    return 0;
}
