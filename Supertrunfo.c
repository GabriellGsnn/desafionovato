#include <stdio.h>
    int main(){
        char estado;
        int codigo;
        char cidade[12] = {}; 
        int populacao;
        float area;
        float pib;
        int pontos_turisticos;

        char estado2;
        int codigo2;
        char cidade2[12] = {}; 
        int populacao2;
        float area2;
        float pib2;
        int pontos_turisticos2;


        //Super Trunfo
        printf("Ola seja bem-vindo ao Super-Trunfo\n");

        //Carta 1
        printf("\nDigite uma letra de A-H para representar o Estado: ");
        scanf(" %c", &estado);
        
        printf("Digite o codigo da sua carta de 01 a 04: ");
        scanf("%d", &codigo);

        printf("Digite a cidade da sua carta: ");
        scanf("%s", cidade);
        
        printf("Digite a populacao da sua cidade: ");
        scanf("%d", &populacao);

        printf("Digite a area da sua cidade em KM: ");
        scanf("%f", &area);

        printf("Digite o PIB da sua cidade: ");
        scanf("%f", &pib);

        printf("Digite o numero de pontos turisticos na sua cidade: ");
        scanf("%d", &pontos_turisticos);



        //Carta 2
        printf("\nAgora vamos cadastrar a sua 2 Carta\n");

        printf("Digite uma letra de A-H para representar o Estado: ");
        scanf(" %c", &estado2);
        
        printf("Digite o codigo da sua carta de 01 a 04: ");
        scanf("%d", &codigo2);

        printf("Digite a cidade da sua carta: ");
        scanf("%s", cidade2);
        
        printf("Digite a populacao da sua cidade: ");
        scanf("%d", &populacao2);

        printf("Digite a area da sua cidade em KM: ");
        scanf("%f", &area2);

        printf("Digite o PIB da sua cidade: ");
        scanf("%f", &pib2);

        printf("Digite o numero de pontos turisticos na sua cidade: ");
        scanf("%d", &pontos_turisticos2);


        //Exibicao
        printf("\nMuito bom! Agora vou exibir os dados da suas cartas\n");
        printf("Carta 1: \n");
        printf("Estado: %c\n", estado);
        printf("Codigo: %d\n", codigo);
        printf("Nome da cidade: %s\n", cidade);
        printf("Populacao: %d\n", populacao);
        printf("Area: %.2f\n", area);
        printf("PIB: %.2f\n",pib);
        printf("Pontos turisticos: %d\n", pontos_turisticos);

        printf("\nCarta 2: \n");
        printf("Estado: %c\n", estado2);
        printf("Codigo: %d\n", codigo2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("Populacao: %d\n", populacao2);
        printf("Area: %.2f\n", area2);
        printf("PIB: %.2f\n",pib2);
        printf("Pontos turisticos: %d\n", pontos_turisticos2);

    return 0;
    }