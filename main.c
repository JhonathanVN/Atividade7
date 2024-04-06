#include <stdio.h>
#include <stdlib.h>

int main(){
    float res, pes, h;
    printf("---------- Calculo de IMC ----------\n");
    printf("\nColoque o seu peso em Kg: ");
    scanf("%f",&pes);
    printf("Agora coloque sua altura em cm: ");
    scanf("%f",&h);
    printf("\n------------------------------------\n");
    h = h/100;
    res = pes/(h*h);
    printf("\n\nIMC = peso / (altura * altura)");
    printf("\n\nSituacao completa...\n");
    printf("\n------------------------------------\n");
    printf("\nO seu IMC eh: %f \n",res);
    if (res < 16.9){
        printf("\nVoce esta muito abaixo do peso!\n");
    }else if (res >= 16.9 && res < 18.5){
        printf("\nVoce esta abaixo do peso!\n");
    }else if (res >= 18.5 && res <=24.9){
        printf("\nVoce esta com o peso normal!\n");
    }else if (res > 24.9 && res <= 29.9){
        printf("\nVoce esta acima do peso!\n");
    }else if (res > 29.9 && res <= 34.9){
        printf("\nVoce esta com obesidade de 1° grau!\n");
    }else if (res > 34.9 && res <= 40){
        printf("\nVoce esta com obesidade de 2° grau!\n");
    }else if (res > 40){
        printf("\nVoce esta com obesidade de 3° grau!\n");
    }
    printf("\n------------------------------------\n");
    return 0;
}
