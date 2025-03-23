#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

 /*
    Programa: Cartas de cidades do Brasil
   Elaborado por: Yasmin Serra
   Descrição: Este programa exibe informações sobre duas cidades brasileiras,
   incluindo estado, código, população, área, PIB e pontos turísticos.
    */

int main() {
    
    //Definição dos dados sobre a primeira cidade:
    char estado1[30]; 
    char codigo1[10]; 
    char cidade1[10];   
    int populacao1;  
    float area1; 
    float pib1;  
    int pturisticos1;  

    //Definição dos dados sobre a segunda cidade:
    char estado2[30]; 
    char codigo2[10]; 
    char cidade2[10];   
    int populacao2;  
    float area2; 
    float pib2;  
    int pturisticos2;  


    // Cadastro de informacaoes da primeria Carta:
    
    printf("\nCarta 1\n");
    printf("Digite a letra do estado (A-H) para a primeira carta: \n");
    scanf("%s", estado1 );
    printf("Digite o Código da carta (ex: A01): \n");
    scanf("%s",codigo1 );
    printf("Digite a Cidade:  \n");
    scanf("%s", cidade1);
    printf("Digite a População:  \n");
    scanf("%d", &populacao1 );
    printf("Digite a Área (km²):  \n");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &pib1);
    printf("Digite o número Pontos Turísticos: \n");
    scanf("%d",&pturisticos1 );
    
    // Cadastro de informacaoes da segunda Carta:
    
   
    printf("\n Carta 2\n");
    printf("Digite a letra do estado (A-H) para a segunda carta: \n");
    scanf("%s", estado2 );
    printf("Digite o Código da carta (ex: A01): \n");
    scanf("%s",codigo2 );
    printf("Digite a Cidade:  \n");
    scanf("%s", cidade2);
    printf("Digite a População:  \n");
    scanf("%d", &populacao2 );
    printf("Digite a Área (km²):  \n");
    scanf("%f", &area2);
    printf("Digite o PIB(em bilhões): \n");
    scanf("%f", &pib2);
    printf("Digite o número de Pontos Turísticos: \n");
    scanf("%d",&pturisticos2 );


    // Exibição dos Dados da primeira Carta:
    printf("\n Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n",  populacao1);
    printf("Área: %f km²\n",  area1);
    printf("PIB: %f em bilhões\n",  pib1);
    printf("Número de Pontos Turísticos: %d\n", pturisticos1);

    printf("\n------------------------------------------\n"); //linha de separação entre cartas.

    
    // Exibição dos Dados da segunda Carta:
    printf("\n Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n",  populacao2);
    printf("Área: %f km²\n",  area2);
    printf("PIB: %f em bilhões\n",  pib2);
    printf("Número de Pontos Turísticos: %d\n", pturisticos2);

    return 0;

   
}

