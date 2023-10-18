#include<stdio.h>
int num1, num2;
int cont1 = 0;
int cont2 = 0;
int main()
{
    printf("VERIFICAR EL NUMERO CON MAYOR CANTIDAD DE NUMEROS PRIMOS\n");
    printf("Ingrese dos numeros: \n");
    scanf("%d %d", &num1, &num2);
    printf("Los numeros ingresados son: %d y %d\n", num1, num2);

    // Bucle para verificar si un numero es primo
    for (int i = 1; i <= num1; i++){   
        if (num1 % i == 0){
            cont1++;
        }     
    }
    if (cont1 == 2){
        printf("Es primo");
    }else{
        printf("No es primo");
         }
            

    for (int j = 1; j <= num2; j++){   
        if (num2 % j == 0){
            cont2++;
        }     
    }
    if (cont2 == 2){
        printf("Es primo");
    }else{
        printf("No es primo");
         }

    return 0;
}
