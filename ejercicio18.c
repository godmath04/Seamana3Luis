#include<stdio.h>

int num1, num2;
int MULTIPLO = 5;
int x;
int menor, mayor;
int main()
{
    printf("PROGRAMA QUE LEE DOS NUMEROS Y MUESTRA LOS MULTIPLOS DE 5 ENTRE ELLOS: \n");
    printf("Ingrese dos numeros para obtener los multiplos de 5 entre ellos: \n");
    scanf("%d", &num1);
    printf("\n");
    scanf("%d", &num2);
    printf("Sus numeros son %d y %d", num1, num2);
    printf("\n");
    printf("Los multiplos son: \n");
    if (num1 < num2)
    {
        menor = num1;
        mayor = num2;
    }else
    {
        menor = num2;
        mayor = num1;
    }
    

    x = menor;
    do
    {
        if (x % MULTIPLO == 0)
        {
            printf("%d ", x);
        }
        x++;    
    } while (x >= menor && x <= mayor);
    
    
    return 0;
}
