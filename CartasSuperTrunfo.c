#include <stdio.h>

int main(){

    int populacao;
    int area;
    int turisticos;
    int pib;
    int percapita;
    char codcarta[20];
    char cidade[50];

    printf("Digite o código da carta:");
    scanf("%c", &codcarta);

    printf("Digite a cidade:");
    scanf("%s", &cidade);

    printf("Digite a população:");
    scanf("%i", &populacao);

    printf("Digite a área:");
    scanf("%i", &area);

    printf("Digite o PIB:");
    scanf("%i", &pib);

    printf("Digite o PIBPerCapita:");
    scanf("%i", &percapita);

    printf("Digite os pontos turísticos:");
    scanf("%d", &turisticos);

    printf("%s | %s", codcarta, cidade);
    printf("População:%i\n Àrea em KM²:%i\n", populacao, area);
    printf("PIB: %i\n PIBPerCapita: %i\n Pontos Turísticos: %d\n", pib, percapita, turisticos);

    return 0;
	
	}