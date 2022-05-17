#include<stdio.h>

float media(float v[], int quant) {

    int i;
    float soma, media;
    soma = 0;

    for (i = 0; i < quant; i++) {
        soma += v[i];
    }
    media = soma / quant;
    return media;
}

float menor(float vMenor[], int num) {

    int j;
    float menor = vMenor[0];

    for (j = 0; j < num; j++) {
        if (vMenor[j] < menor) {
            menor = vMenor[j];
        }
    }
    return menor;
}

float maior(float vMaior[], int numMa) {

    int m;
    float maior = vMaior[0];

    for (m = 0; m < numMa; m++) {
        if (vMaior[m] > maior) {
            maior = vMaior[m];
        }
    }
    return maior;
}

int main() {

    int k;
    float vetor[8], resultMedia, resultMenor, resultMaior;

    for (k = 0; k < 8; k++) {
        printf("Insira um valor para v[%d]: ", k);
        scanf("%f", &vetor[k]);
    }

    resultMedia = media(vetor, 8);
    resultMenor = menor(vetor, 8);
    resultMaior = maior(vetor, 8);

    if (resultMedia >= 50) {
        printf("Media: %.2f\n", resultMedia);
    }

    printf("Menor: %.2f\nMaior: %.2f", resultMenor, resultMaior);
    return(0);
}
