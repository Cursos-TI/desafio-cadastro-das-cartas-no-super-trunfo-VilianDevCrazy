#include <stdio.h>
#include <locale.h>

// Criando a estrutura básica para o Super Trunfo em linguagem C
// Chamando as funções
int main() {
    //Chamando a função locale e passando que o idioma como língua portuguesa
    setlocale(LC_ALL, "Portuguese");

    char Estado[10], Estado2[10];
    char Codigo[10], Codigo2[10];
    char Nome_da_cidade[50], Nome_da_cidade2[50];
    float Populacao, Populacao2;
    float Area, Area2;
    float PIB, PIB2;
    int Numero_de_pontos_turisticos, Numero_de_pontos_turisticos2;
    
    // Solicita as informações das cartas
    printf("\n--- CARTA 1 ---\n");
    printf("Digite uma letra de 'A' a 'H'(representando um dos oito estados): \n");

    printf("Estado: \n"); 
    scanf("%s", Estado);

    printf("O código contém o estado + o número da cidade\n");
    printf("EX: A01, B02, C03, D04, E05, F06, G07, H08\n");
    
    printf("Código: \n");
    scanf("%s", Codigo);

    printf("Nome da Cidade: \n");
    fgets(Nome_da_cidade, 50, stdin);

    printf("População: habitantes\n");
    scanf("%f", &Populacao);

    printf("Área: km²\n", Area);
    scanf("%f", &Area);

    printf("PIB: bilhões de reais\n");
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &Numero_de_pontos_turisticos);

    // Solicitando informações para a 2º carta
    printf("\n--- CARTA 2 ---\n");
    printf("\n--- Informações da Cidade ---\n");
    
    printf("Estado: \n", Estado2);
    scanf("%s", Estado2);

    printf("O código contem o estado + o número da cidade\n");
    printf("EX: A01, B02, C03, D04, E05, F06, G07, H08\n");
    printf("Código: \n");
    scanf("%s", Codigo2);

    printf("Nome da Cidade: \n");
    fgets(Nome_da_cidade2, 50, stdin);

    printf("População: habitantes\n");
    scanf("%f", &Populacao2);

    printf("Área: km²\n");
    scanf("%f", &Area2);

    printf("PIB: bilhões de reais\n");
    scanf("%f", &PIB2);
    
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &Numero_de_pontos_turisticos2);

    // Exibe as informações digitadas pelo usuário
    printf("\n=== INFORMAÇÕES DAS CARTAS ===\n");
    // Primeira carta
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Nome_da_cidade);
    printf("População: %.2f habitantes\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", Numero_de_pontos_turisticos);

    // Segunda carta
    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Nome_da_cidade2);
    printf("População: %.2f habitantes\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Numero_de_pontos_turisticos2);
}
