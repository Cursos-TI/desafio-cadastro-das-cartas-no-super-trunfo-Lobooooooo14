#include <stdio.h>

int main()
{
    char city_code[5];
    char city_name[50];
    int city_population;
    float city_area;
    float city_GDP;
    int city_tourist_attractions;

    printf("Digite o código da cidade: ");
    scanf("%s", city_code);

    printf("Digite o nome da cidade: ");
    scanf("%s", city_name);

    printf("Digite a população da cidade: ");
    scanf("%d", &city_population);

    printf("Digite a área da cidade: ");
    scanf("%f", &city_area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &city_GDP);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &city_tourist_attractions);

    printf(
        "\nCidade: %s - [%s]\nPopulação: %d\nÁrea: %f\nPIB: %f\nPontos Turísticos: %d\n",
        city_name,
        city_code,
        city_population,
        city_area,
        city_GDP,
        city_tourist_attractions);

    return 0;
}
