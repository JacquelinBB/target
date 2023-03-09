#include <stdio.h>

int main (){
    printf("a) 1");

    int valor = 1, aux = 0, comp = 0;
    for (int i = 0; i < 4; i++){
        valor = valor + 2;
        printf(", %d", valor);
    }

    printf("\nb) 2");
    valor = 2;
    for (int i = 0; i < 6; i++){
        valor = valor + valor;
        printf(", %d", valor);
    }

    printf("\nc) 0, 1");
    aux = 1;
    valor = 1;
    for (int i = 0; i < 6; i++){
        aux = aux + 2;
        valor = valor + aux;
        printf(", %d", valor);
    }

    printf("\nd) 4, 16");
    aux = 3;
    valor = 4;
    comp = 4;
    for (int i = 0; i < 3; i++){
        aux = aux + 2;
        comp = comp + aux;
        valor = comp * 4;
        printf(", %d", valor);
    }

    printf("\ne) 1, 1");
    int vet[7] = {1,1,0,0,0,0,0};
    for (int i = 2; i < 7; i++){
        vet[i] = vet[i-2] + vet[i-1];
        printf(", %d", vet[i]);
    }

    printf("\nf) 2, 10, 12, 16, 17, 18, 19, 200\n"); // O começo da palavra com "d"
}