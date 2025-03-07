#ifndef ATM_H_INCLUDED
#define ATM_H_INCLUDED

int verifica(float x) {
    if (x > 0) {
        return 1;
    } else if (x == 0) {
        printf("La cantidad ingresada es 0. No me hagas perder mi tiempoooooooooooooo \n");
        return 0;
    } else {
        printf("La cantidad ingresada no es valida. Ingrese otra cantidad \n");
        return 0;
    }
}

float consultarSaldo(float saldo) {
    printf("Tu saldo es: %.2f \n", saldo);
    return saldo;
}

float depositar(float saldo) {
    float money;
    printf("Cantidad a depositar: \n");
    scanf("%f", &money);

    if (verifica(money)) {
        saldo = saldo + money;
        printf("Deposito realizado con exito. Nuevo saldo: %.2f \n", saldo);
    }

    return saldo;
}

float retirar(float saldo) {
    float money;
    printf("Cantidad a retirar: \n");
    scanf("%f", &money);

    if (verifica(money)) {
        if (money > saldo) {
            printf("No puedes retirar mas dinero del que tienes en tu cuenta. Saldo actual: %.2f \n", saldo);
        } else {
            saldo = saldo - money;
            printf("Retiro realizado con exito. Nuevo saldo: %.2f \n", saldo);
        }
    }

    return saldo;
}

#endif // ATM_H_INCLUDED
