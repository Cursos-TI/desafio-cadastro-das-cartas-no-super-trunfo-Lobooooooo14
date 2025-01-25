#include <stdio.h>

int main()
{
    char city_code[5];
    char city_name[50];
    int city_population;
    float city_area;
    float city_GDP_total;
    int city_tourist_attractions;

    float city_population_density;
    float city_GDP_per_capita;

    printf("Digite o código da cidade: ");
    scanf("%s", city_code);

    printf("Digite o nome da cidade: ");
    scanf("%s", city_name);

    printf("Digite a população da cidade: ");
    scanf("%d", &city_population);

    printf("Digite a área da cidade: ");
    scanf("%f", &city_area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &city_GDP_total);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &city_tourist_attractions);

    city_population_density = city_population / city_area;
    city_GDP_per_capita = city_GDP_total / city_population;

    printf(
        "\nCidade: %s - [%s]\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\nDensidade de População: %.2f\nPIB por Capita: %.2f\n",
        city_name,
        city_code,
        city_population,
        city_area,
        city_GDP_total,
        city_tourist_attractions,
        city_population_density,
        city_GDP_per_capita);

    return 0;
}
