
//07 de marzo del 2025
//cajero automatico
//KSFJ


#include <stdio.h>
#include <stdlib.h>
#include "atm.h"



int main() {
    int opcion, cuenta;
    int pin = 1234, pinIngresado, intentos = 0;
    float saldo [3] = {1000,2000, 3000};

   	printf("<<<<<     Elija la cuenta a la que quiera acceder     >>>>>>\n");
	printf("Cuenta 1\n");
	printf("Cuenta 2\n");
	printf("Cuenta 3\n");
	scanf("%i",&cuenta);
	cuenta--;//para restarle al numero que da el usurio y que este d acuerdo con los arreglos

    //pin
    while (intentos < 3) {
        printf("Ingrese su PIN: ");
        scanf("%d", &pinIngresado);

        if (pinIngresado == pin) {
            printf("\nPIN correcto. Acceso concedido.\n\n");
            break;  // cerrar ciclo
        } else {
            intentos++;
            printf("PIN incorrecto.\n");
            if (intentos == 3) {
                printf("Demasiados intentos fallidos. El programa se cerrara.\n");
                return 0;  // se cierra despues de 3 intentos
            }
        }
    }



    do {
        printf("---Cajero Automatico---\n");
        printf("1. Consultar saldo \n");
        printf("2. Depositar dinero \n");
        printf("3. Retirar dinero \n");
        printf("4. Salir \n\n");
        printf("Seleccione una opcion: ");
        scanf("%i", &opcion);

        switch (opcion) {
            case 1:
                saldo[cuenta] = consultarSaldo(saldo[cuenta]);
                break;
            case 2:
                saldo[cuenta] = depositar(saldo[cuenta]);
                break;
            case 3:
                saldo[cuenta] = retirar(saldo[cuenta]);
                break;

            case 4:
                printf("Gracias por usar el cajero automatico \n");
                break;
            default:
                printf("Opcion no valida \n");
        }

    } while (opcion != 4);

    return 0;
}
