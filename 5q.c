#include <stdio.h>

int main (){
    char string[19] = {"Tenha um otimo dia!"};
    int count = 0;

    for (int i = 18; i != EOF ;i--){
        printf("%c", string[i]);
    }

    printf("\n");
}