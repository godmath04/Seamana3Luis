#include<stdio.h>

int menor, mayor;
int MULTIPLO = 5;
int x;
int main()
{
    printf("PROGRAMA QUE LEE DOS NUMEROS Y MUESTRA LOS MULTIPLOS DE 5 ENTRE ELLOS: \n");
    scanf("%d", &menor);
    printf("\n");
    scanf("%d", &mayor);
    printf("Sus numeros son %d y %d", menor, mayor);
    x = menor;
    do
    {
        if (x % MULTIPLO == 0)
        {
            printf("%d", &x);
        }
        
        
    } while (x>=menor && x<=mayor);
    
    
    return 0;
}
