#include <stdio.h>

int main() {
    char estado1[30], cidade1[30], codigo1[10],estado2[30], cidade2[30], codigo2[10];
    int populacao1, turismo1, populacao2, turismo2;
    float area1, PIB1, DensPop1, PIBpc1, DensPop2, PIBpc2, area2, PIB2;

    //Valores da 1° carta
    estado1 = "A";
    cidade1 = "São Paulo";
    codigo1 = "A01";
    populacao1 = 12325000;
    turismo1 = 50;
    area1 = 1521.11;
    PIB1 = 699.28;
    //valores da carta 2
    estado2 = "B";
    cidade2 = "RiodeJaneiro";
    codigo2 = "B02";
    populacao2 = 6748000;
    turismo2 = 30;
    area2 = 1200.25;
    PIB2 = 300.50;

    DensPop1 = populacao1/area1;
    
    printf("A densidade populacional é %f Denspop1");

    return 0;
}