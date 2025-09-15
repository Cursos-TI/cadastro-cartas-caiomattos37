#include <stdio.h>
int main(){

    char estado1;
    char codigo1[4]; 
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontoTuristico1;

    char estado2;
    char codigo2[4]; 
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontoTuristico2;
    
// Digitando a inicial do estado da carta 1
    printf("Digite o estado da carta 1 (A-H): ");
    scanf(" %c", &estado1);
// saida do codigo da carta 1
    printf("Digite o codigo da carta 1 (ex: A01) ");
    scanf(" %s", &codigo1);
// leitura da cidade da carta 1    
    printf("Digite o nome da cidade numero 1: ");
    scanf("%s", &cidade1);
// leitura do numero da população da carta 1    
    printf("A população da cidade 1: ");
    scanf("%d", &populacao1);
// exibindo do valor da area da carta 1 (obs: Digite o número sem o ponto .)  
    printf("O valor da area da cidade (em km2): ");
    scanf("%f", &area1);
// exibindo o valor do pib da carta 1    
    printf("O valor do PIB da cidade (em Bilhoes de reais): ");
    scanf("%f", &pib1);
// exibindo a quantidade de pontos turisticos na cidade 1    
    printf("Quantidade de pontos turisticos da cidade: %d", pontoTuristico1);
    scanf("%d", &pontoTuristico1);
  

    
// Digitando a inicial do estado da carta 2
    printf("Digite o estado da carta 2 (A-H): ");
    scanf(" %c", &estado2);
// saida do codigo da carta 2
    printf("Digite o codigo da carta 2 (ex: A01) ");
    scanf(" %s", &codigo2);
// leitura da cidade da carta 2   
    printf("Digite o nome da cidade numero 2: ");
    scanf("%s", &cidade2);
// leitura do numero da população da carta 2    
    printf("A população da cidade 2: ");
    scanf("%d", &populacao2);
// exibindo do valor da area da carta 2 (obs: digite o número sem o ponto) 
    printf("O valor da area da cidade (em km2): ");
    scanf("%f", &area2);
// exibindo o valor do pib da carta 2   
    printf("O valor do PIB da cidade (em Bilhoes de reais): ");
    scanf("%f", &pib2);
// exibindo a quantidade de pontos turisticos na cidade 1    
    printf("Quantidade de pontos turisticos da cidade: ");
    scanf("%d", &pontoTuristico1);
  
// exibindo dados da carta 1
    printf("\n carta numero 1 \n");
    printf("Estado: %c\n", estado1);
    printf("codigo: %s\n", codigo1);
    printf("cidade: %s", cidade1);
    printf("população: %d\n", populacao1);
    printf("PIB: %f\n", pib1);
    printf("Ponto Turistico: %d\n", pontoTuristico1);

// exibindo dados da carta 2    
    printf("\n carta numero 2 \n");
    printf("Estado: %c\n", estado2);
    printf("codigo: %s\n", codigo2);
    printf("cidade: %s", cidade2);
    printf("população: %d\n", populacao2);
    printf("PIB: %f\n", pib2);
    printf("Ponto Turistico: %d\n", pontoTuristico2);



    return 0;

   


}
