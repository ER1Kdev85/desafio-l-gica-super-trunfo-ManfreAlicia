#include <stdio.h>

//-------------------------------------------------------------------------------

// Variaveis para as cartas. Lembrando: Char: %s - int: %d - float %f
  // 1° Etapa;
char estado[3], estado2[3];
char id[4], id2[4];
char nome[50], nome2[50];
int pontost, pontost2;
float populacao, populacao2;
float area, area2;
float pib, pib2;
  // 2° Etapa - Adicionando 2 variáveis.
float dp, dp2, PIBpc, PIBpc2;  
 // 3° Etapa - Acionando Operados Relacionais
 float resultadop, resultadoa, resultadopib, resultadopt, resultadodp, resultadopibc;
 float resultadop2, resultadoa2, resultadopib2, resultadopt2, resultadodp2, resultadopibc2;
 float superpoder1, superpoder2;
 float vencedor1, vencedor2;
 int pontos1, pontos2;

//-------------------------------------------------------------------------------

                    //inicio
int main() {
    printf("================================================\n");
    printf(" Seja bem-vindo(a) ao Sistema de Cartas Trunfo! \n");
    printf("================================================\n");
    printf("\n*****************************************************************************\n");
    printf(" === Algumas dicas importantes para o melhor funcionamento do programa! === \n");
    printf("*****************************************************************************\n");
    printf("______________________________________________________________________________________________ \n");
    
    printf("\n 1° Não use '.' e ',' ao digitar números. \n");
    printf("Ex: 1.123,980 milhões → Correto: 1123980 \n");
    printf("Use ponto apenas para separar decimais. Ex: 312.35 (caso o número tenha casas decimais).\n");
    
    printf("______________________________________________________________________________________________ \n");
    
    printf("\n 2° Não use espaços nos nomes compostos. \n");
    printf("Ex: Rio de Janeiro ou São Paulo → Correto: RiodeJaneiro ou riodejaneiro, SaoPaulo ou saopaulo \n");
    printf("Obs.: Acentuação não é necessária. \n");
    
    printf("_________________________________________________________________________________________________\n");
    


    // Informações/valores onde o úsuario vai aplicar nas cartas.

//-------------------------------------------------------------------------------

// CARTA 1

printf("\n >>>> VAMOS COMEÇAR? DIGITE OS DADOS DA SUA PRIMEIRA CARTA <<<< \n");
printf("\n--- Preenchendo CARTA 1 ---\n");

    // DADOS:
    printf("Digite o estado [UF]: ");
    scanf("%3s", estado);  

    printf("\nOk. Agora me diga o ID da carta: ");
    scanf("%3s", id);

    printf("\nÓtimo, pode me informar o nome da cidade? (Ex: Fortaleza, RioDeJaneiro, SaoPaulo) -> ");
    scanf("%s", nome);

    printf("\nQual a população atual da cidade? (Digite sem '.' e ',') -> ");
    scanf("%f", &populacao);

    printf("\nPerfeito! Consegue me informar a quantidade de pontos turísticos da cidade? -> ");
    scanf("%d", &pontost);

    printf("\nQual a área total da cidade em km2? (Ex: 313,354 para: 313.354km2 ou 1.199,828km2 p/ 1199828) -> ");
    scanf("%f", &area);

    printf("\nQual o PIB da cidade em Reais? (Ex: R$12,7 milhões p/ 12700000) -> ");
    scanf("%f", &pib);

//-------------------------------------------------------------------------------

// CARTA 2
    printf("\n--------------------------------------------------------------------------\n");
    printf("Perfeito, já registramos sua primeira carta. Vamos preencher a CARTA 2? \n");
    printf("--------------------------------------------------------------------------\n");

    // DADOS:
    printf("\n --- Preenchendo a CARTA 2 --- \n");

    printf("\n CARTA 2. Comece digitando o estado [UF]: ");
    scanf("%3s", estado2);  

    printf("\n Agora o ID da carta: ");
    scanf("%3s", id2);

    printf("\n Ótimo. Qual o nome da cidade? (Ex: Fortaleza, RioDeJaneiro, SaoPaulo) -> ");
    scanf("%s", nome2);

    printf("\n População atual da cidade? (Lembre-se, sem '.' e ',') -> ");
    scanf("%f", &populacao2);

    printf("\n Perfeito! Consegue me informar a quantidade de pontos turísticos? -> ");
    scanf("%d", &pontost2);

    printf("\n Qual a área total em km2? (Lembre-se: Ex: 1.199,828km2 p/ 1199828) -> ");
    scanf("%f", &area2);

    printf("\nPor último, qual o PIB da cidade em Reais? (Ex:  R$12,7 milhões para 12700000) -> ");
    scanf("%f", &pib2);

//-------------------------------------------------------------------------------

// *** Calculo de Densidade populacional e PIB Per Carpi ***

dp = populacao / area;
dp2 = populacao2 / area2;

PIBpc = pib / populacao;
PIBpc2 = pib2 / populacao2;


// Operados CARTA 1
resultadop = populacao >= populacao2;
resultadoa = area >= area2;
resultadopib = pib >= pib2; 
resultadopt = pontost >= pontost2;
resultadodp = dp < dp2;
resultadopibc = PIBpc >= PIBpc2;

// Operadores CARTA 2
resultadop2 = populacao2 >= populacao;
resultadoa2 = area2 >= area;
resultadopib2 = pib2 >= pib; 
resultadopt2 = pontost2 >= pontost;
resultadodp2 = dp2 < dp;
resultadopibc2 = PIBpc2 >= PIBpc;

// Poder Total:
pontos1 = resultadop + resultadoa + resultadopib + resultadopt + resultadodp + resultadopibc;
pontos2 = resultadop2 + resultadoa2 + resultadopib2 + resultadopt2 + resultadodp2 + resultadopibc2;

vencedor1 = pontos1 >= pontos2;
vencedor2 = pontos2 >= pontos1;


//-------------------------------------------------------------------------------

// RESULTADOS:
printf("\n=============================\n");
printf("CARTAS CRIADAS COM SUCESSO! \n");
printf("=============================\n");

//-------------------------------------------------------------------------------

    // EXIBIR RESULTADO DA CARTA 1:

    printf("\n---- CARTA 1 ---- \n");
    printf("Estado: %s\n", estado);
    printf("ID: %s\n", id);
    printf("Cidade: %s\n", nome);
    printf("População: %.0f\n", populacao);
    printf("Quantidade de pontos turisticos: %d\n", pontost);
    printf("Área total (Km2): %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Densidade Populacional: %.0f hab/km2\n", dp);
    printf("PIB Per Capita: %.2f Reais\n", PIBpc);


//-------------------------------------------------------------------------------

    // EXIBIR RESULDADO DA CARTA 2:

    printf("\n---- CARTA 2 ---- \n");
    printf("Estado: %s\n", estado2);
    printf("ID: %s\n", id2);
    printf("Cidade: %s\n", nome2);
    printf("População: %.0f\n", populacao2);
    printf("Quantidade de pontos turisticos: %d\n", pontost2);
    printf("Área total (Km2): %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Densidade Populacional: %.0f hab/km2\n", dp2);
    printf("PIB Per Capita: %.2f Reais\n", PIBpc2);


//----------------- Operadores Relacionais -----------------------------------------

printf("\n ============================================== \n");
printf("---- Resultado de Poderes da Carta 1: ----- \n");
printf("Se a carta receber o valor 1 ganha um ponto. Porém, na densidade populacional o 0 também vale um ponto \n");
printf("============================================== \n");
printf("\n População: %.0f\n", resultadop);
printf("Área: %.0f\n", resultadoa);
printf("PIB: %.0f\n", resultadopib);
printf("Pontos Turísticos: %.0f\n", resultadopt);
printf("Densidade Populacional: %.0f\n", resultadodp);
printf("PIB Per Capita: %.0f\n", resultadopibc);

printf("\n ============================================== \n");
printf("---- Resultado de Poderes da Carta 2: ----- \n");
printf("Lembrando que Densidade Populacional sendo 0, vale Um ponto. \n");
printf("============================================== \n");
printf("\n População: %.0f\n", resultadop2);
printf("Área: %.0f\n", resultadoa2);
printf("PIB: %.0f\n", resultadopib2);
printf("Pontos Turísticos: %.0f\n", resultadopt2);
printf("Densidade Populacional: %.0f\n", resultadodp2);
printf("PIB Per Capita: %.0f\n", resultadopibc2);

// Resultado: -----------------------------------------------------------------------
printf("\n-----------------------------------\n");
printf("Poder Total - CARTA 1: %0.f\n", vencedor1);
printf("Poder Total - CARTA 2: %0.f\n", vencedor2);

// FINAL

    return 0;
}
