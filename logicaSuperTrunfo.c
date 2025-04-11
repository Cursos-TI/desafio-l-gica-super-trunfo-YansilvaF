#include <stdio.h>
#include <string.h>

int main() {
    char estado1[30], cidade1[30], codigo1[10];
    char estado2[30], cidade2[30], codigo2[10];
    int populacao1, turismo1, populacao2, turismo2;
    float area1, PIB1, DensPop1, PIBpc1;
    float area2, PIB2, DensPop2, PIBpc2;

    // Valores da 1ª carta
    strcpy(estado1, "A");
    strcpy(cidade1, "São Paulo");
    strcpy(codigo1, "A01");
    populacao1 = 12325000;
    turismo1 = 50;
    area1 = 1521.11;
    PIB1 = 699.28;

    // Valores da 2ª carta
    strcpy(estado2, "B");
    strcpy(cidade2, "Rio de Janeiro");
    strcpy(codigo2, "B02");
    populacao2 = 674800000;
    turismo2 = 30;
    area2 = 1200.25;
    PIB2 = 300.50;

    // Cálculos
    DensPop1 = populacao1 / area1;
    PIBpc1 = PIB1 * 1000000000 / populacao1; // PIB está em bilhões

    DensPop2 = populacao2 / area2;
    PIBpc2 = PIB2 * 1000000000 / populacao2;

    //Escolha o atributo a ser comparado entre "populacao", "area", "PIB", "Densidade Populacional" ou "PIBperCapita"
    char atributo[30] = "PIB";

    //calculo do atributo escolhido
    if (strcmp(atributo, "populacao") == 0) {
        if (populacao1 > populacao2) printf("A primeira carta tem maior população.\n");
        else if (populacao1 < populacao2)printf("A segunda carta tem maior população.\n");
        else printf("Empate!\n");
    } 
    
    else if (strcmp(atributo, "area") == 0) {
        if (area1 > area2) printf("A primeira carta tem maior área.\n");
        else if (area1 < area2) printf("A segunda carta tem maior área.\n");
        else printf("Empate!\n");
    } 
    
    else if (strcmp(atributo, "PIB") == 0) {
        if (PIB1 > PIB2) printf("A primeira carta tem maior PIB.\n");
        else if (PIB1 < PIB2) printf("A segunda carta tem maior PIB.\n");
        else printf("Empate!\n");
   } 
   
    else if (strcmp(atributo, "Densidade Populacional") == 0) {
        if (DensPop1 < DensPop2) printf("A primeira carta tem menor densidade populacional.\n");
        else if (DensPop1 > DensPop2) printf("A segunda carta tem menor densidade populacional.\n");
        else printf("Empate!\n");
    } 
    
    else if (strcmp(atributo, "PIBperCapita") == 0) {
        if (PIBpc1 > PIBpc2) printf("A primeira carta tem maior PIB per capita.\n");
        else if (PIBpc1 < PIBpc2) printf("A segunda carta tem maior PIB per capita.\n");
        else printf("Empate!\n");
    } 
    
    else {
        printf("Atributo inválido.\n");
    }

    return 0;
}
