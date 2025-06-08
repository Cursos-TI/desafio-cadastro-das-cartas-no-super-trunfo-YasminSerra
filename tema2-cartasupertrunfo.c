#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Calculando Densidade Populacional e PIB per Capita.

 /*
    Programa: Inserindo densidade populacional e PIB per Capita.
   Elaborado por: Yasmin Serra
    O programa permite o cadastro de informações de duas cidades e realiza cálculos de densidade populacional e PIB per capita, exibindo os resultados de forma organizada e formatada.
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
    float densidade1;
    float pibper1;

    //Definição dos dados sobre a segunda cidade:
    char estado2[30]; 
    char codigo2[10]; 
    char cidade2[10];   
    int populacao2;  
    float area2; 
    float pib2;  
    int pturisticos2;  
    float densidade2;
    float pibper2;



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

    densidade1 = (float) populacao1 / area1;    // Inserção de novas funções
    densidade2 = (float) populacao2 / area2;    // Inserção de novas funções

    pibper1 = (float) pib1 /populacao1 ;
    pibper2 = (float)pib2 / populacao2 ;


    // Exibição dos Dados da primeira Carta:
    printf("\n Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n",  populacao1);
    printf("Área: %f km²\n",  area1);
    printf("PIB: %f em bilhões\n",  pib1);
    printf("Número de Pontos Turísticos: %d\n", pturisticos1);
    printf("Densidade populacional: %.2f \n", densidade1);  //Exibição de novos dados
    printf("PIB per capita: %.2f\n", pibper1); //Exibição de novos dados

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
    printf("Densidade populacional: %.2f \n", densidade2); 
    printf("PIB per capita: %.2f\n", pibper2);
    
  
  // Comparando as cartas usando o atributo População
  
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;

   
}
