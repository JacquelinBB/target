#include <stdio.h>

int main (){
    const float DIST_INI = 0.0, DIST_FINAL = 100.0, VEL_CAR  = 110, VEL_CAM = 80, PED = 2, TEMP_PED = 5;
    float distCar, distCam, temp;

    temp = ((DIST_FINAL - DIST_INI) / (VEL_CAR + VEL_CAM) * 60); // Como o caminhão e o carro se cruzam, vamos igualar para encontrar no tempo em que se encontram e converte o tempo de hora para minuto
    distCar = DIST_FINAL - (VEL_CAR * 0.016666666) * temp; // Achando a distância que o caminhão se cruza com o carro e converte km/h para km/m na velocidade constante
    distCam = DIST_INI + (VEL_CAM * 0.016666666) * temp; // Achando a distância que o carro se cruza com o caminhão e converte km/h para km/m na velocidade constante

    if (distCar == distCam){ // A distância deve ser igual, pois é o ponto em que se encontram
        distCam = distCam + (TEMP_PED * PED); // Devido aos dois pedágios, o caminhão sofre alteração
        if (distCam > distCar){ // Verificando qual está mais próximo
            printf("O carro está mais próximo da cidade de Ribeirão Preto\n");
        }
        else {
            printf("O caminhão está mais próximo da cidade de Ribeirão Preto\n");
        }
    }
}
