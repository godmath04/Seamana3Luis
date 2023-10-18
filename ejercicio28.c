#include<stdio.h>
int num1, num2, user1, user2;
int cont1 = 0;
int cont2 = 0;
int primo1 = 0;
int primo2 = 0;

void primos(int num1, int num2){

    // Bucle para verificar si un numero es primo
    for (int i = 1; i <= num1; i++){   
        if (num1 % i == 0){
            primo1++;
        }     
    }
    if (primo1 == 2){
        cont1++;
    }
            

    for (int j = 1; j <= num2; j++){   
        if (num2 % j == 0){
            primo2++;
        }     
    }
    if (primo2 == 2){
        cont2++;
    }
}

int main()
{
    printf("VERIFICAR EL NUMERO CON MAYOR CANTIDAD DE NUMEROS PRIMOS\n");
    printf("Ingrese dos numeros: \n");
    scanf("%d %d", &user1, &user2);
    printf("Los numeros ingresados son: %d y %d\n", user1, user2);
    primos(user1, user2);

    return 0;
}
