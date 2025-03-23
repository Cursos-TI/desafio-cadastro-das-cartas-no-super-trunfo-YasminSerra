#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
 /*
    Programa: Cartas de cidades do Brasil
   Elaborado por: Yasmin Serra
   Descrição: Este programa exibe informações sobre duas cidades brasileiras,
   incluindo estado, código, população, área, PIB e pontos turísticos.
    */
int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
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
    
    printf("Carta 1\n");
    printf("Digite o nome do Estado: \n");
    scanf("%s", estado1 );
    printf("Digite o Código: \n");
    scanf("%s",codigo1 );
    printf("Digite a Cidade:  \n");
    scanf("%s", cidade1);
    printf("Digite a População:  \n");
    scanf("%d", &populacao1 );
    printf("Área:  km²\n");
    scanf("%f", &area1);
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    printf("Digite os Pontos Turísticos: \n");
    scanf("%d",&pturisticos1 );
    
    // Cadastro de informacaoes da segunda Carta:
    
   
    printf("Carta 2 \n");
    printf("Digite o nome do Estado: \n");
    scanf("%s", estado2 );
    printf("Digite o Código: \n");
    scanf("%s",codigo2 );
    printf("Digite a Cidade:  \n");
    scanf("%s", cidade2);
    printf("Digite a População:  \n");
    scanf("%d", &populacao2 );
    printf("Área:  km²\n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    printf("Digite os Pontos Turísticos: \n");
    scanf("%d",&pturisticos2 );


    // Exibição dos Dados da primeira Carta:
    printf("\n Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n",  populacao1);
    printf("Área: %f km²\n",  area1);
    printf("PIB: %f\n",  pib1);
    printf("Pontos Turísticos: %d\n", pturisticos1);

    printf("\n------------------------------------------\n"); //linha de separação entre cartas.


    // Exibição dos Dados da segunda Carta:
    printf("\n Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n",  populacao2);
    printf("Área: %f km²\n",  area2);
    printf("PIB: %f\n",  pib2);
    printf("Pontos Turísticos: %d\n", pturisticos2);


   
}

