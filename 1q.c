#include <stdio.h>

int main () {
    int indice = 13, soma = 0, k = 0;

    while (k < indice){
        k++;
        soma = soma + k;
    }

    printf("O valor da soma: %d\n", soma);
}