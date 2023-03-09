#include <stdio.h>

int main (){
    const int MAX = 45;
    int vet[MAX], num, count = 0;

    scanf("%d", &num);
    
    for (int i = 0; i < MAX; i++){
        vet[i] = 0;
    }

    vet[1] = 1;

    for (int i = 2; i < MAX; i++){
        vet[i] = vet[i-2] + vet[i-1];
    }

    for (int i = 0; i < MAX; i++){
        if (num == vet[i]){
            count = 1;
            printf("\nNúmero informado pertence a sequência.\n");
        }
    }

    if (count == 0 && num < 701408733){
        printf("\nNúmero informado não pertence a sequência.\n");
    }

    if (num > 701408733){
        printf("\nInforme um número menor!\n");
    }
}