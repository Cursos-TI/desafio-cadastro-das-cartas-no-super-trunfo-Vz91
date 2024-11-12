#include <stdio.h>

int main(){

    int populacao;
    int area;
    int turisticos;
    int pib;
    double percapita;
    char cod_carta[5], cidade[30];

    printf("Digite o código da carta:");
    scanf("%s", &cod_carta);

    printf("Digite a cidade:");
    scanf("%s", &cidade);

    printf("Digite a população:");
    scanf("%i", &populacao);

    printf("Digite a área:");
    scanf("%i", &area);

    printf("Digite o PIB:");
    scanf("%d", &pib);

    printf("Digite o PIBPerCapita:");
    scanf("%f", &percapita);

    printf("Digite os pontos turísticos:");
    scanf("%d", &turisticos);

    printf("%s", cod_carta);
    printf("%s", cidade);
    printf("População:%i\n Àrea em KM²:%i\n", populacao, area);
    printf("PIB: %d\n PIBPerCapita: %f\n Pontos Turísticos: %d\n", pib, percapita, turisticos);

    return 0;
	
	}