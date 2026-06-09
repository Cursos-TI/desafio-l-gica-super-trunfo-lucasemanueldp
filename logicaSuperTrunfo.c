#include <stdio.h>

int main() {
    // Adição das váriaveis e atributos
    char estado1, estado2, codigo1[50],codigo2[50], nomecidade1[50], nomecidade2[50];
    int pontosturisticos1, pontosturisticos2, menu1, menu2;
    unsigned long int populacao1, populacao2, somaCarta1, somaCarta2;
    float area1, area2, pib1, pib2, densidadepopulacional1, densidadepopulacional2, pibpercapita1, pibpercapita2, inversodens1, inversodens2, superPoder1, superPoder2;
    
    //Apenas para maior organização visual
    printf("----------------------------------------\n");
    printf("----------CADASTRO CARTA 1--------------\n");
    //Cadastro da carta 1

    //Leitura do estado
    printf("Digite uma letra para representar o estado: \n");
    scanf("  %c", &estado1);
    //Leitura do código
    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);
    //Leitura do nome da cidade
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomecidade1);
    //Leitura da populaçao
    printf("Digite a quantidade da população da cidade: \n");
    scanf("%lu", &populacao1);
    //Leitura da área da cidade
    printf("Digite o tamanho da área da cidade: \n");
    scanf("%f", &area1);
    //Leitura do PIB da cidade
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);
    //Leitura dos pontos turísticos
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos1);
    //Cálculo de Densidade Populacional
    densidadepopulacional1 = (float)populacao1/area1;
    //Cáluclo de PIB per Capita
    pibpercapita1 = (float)pib1/populacao1;

    //Cadastro carta 2
    printf("----------------------------------------\n");
    printf("----------CADASTRO CARTA 2--------------\n");

    //Leitura do estado
    printf("Digite uma letra para representar o estado: \n");
    scanf("  %c", &estado2);
    //Leitura do código
    printf("Digite o código da carta: \n");
    scanf(" %s", codigo2);
    //Leitura do nome da cidade
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomecidade2);
    //Leitura da populaçao
    printf("Digite a quantidade da população da cidade: \n");
    scanf("%lu", &populacao2);
    //Leitura da área da cidade
    printf("Digite o tamanho da área da cidade: \n");
    scanf("%f", &area2);
    //Leitura do PIB da cidade
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    //Leitura dos pontos turísticos
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos2);
    //Cálculo de Densidade Populacional
    densidadepopulacional2 = (float)populacao2/area2;
    //Cáluclo de PIB per Capita
    pibpercapita2 = (float)pib2/populacao2;

    //Cálculo do inverso da Densidade populacional
    inversodens1 = 1.0/densidadepopulacional1;
    inversodens2 = 1.0/densidadepopulacional2;

    //Cálculo Super Poder Card 1
    superPoder1 = (float) populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + inversodens1;
    //Cálculo Super Poder Card 2
    superPoder2 = (float) populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + inversodens2;

    

    //Organização estética para impressão da carta
    printf("--------------------------------------------\n");
    printf("            SUPER TRUNFO CARD 1            \n");
    printf("--------------------------------------------\n");
    //Impressão dos dados da carta
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome Da Cidade: %s\n", nomecidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Números de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais \n", pibpercapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    printf("--------------------------------------------\n");

    //Organização estética para impressão da carta
    printf("--------------------------------------------\n");
    printf("            SUPER TRUNFO CARD 2            \n");
    printf("--------------------------------------------\n");
    //Impressão dos dados da carta
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome Da Cidade: %s\n", nomecidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Números de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais \n", pibpercapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("--------------------------------------------\n");
    //Finalização Carta 2

    //Visualização do MENU 1
    printf("--------------------------------------------\n");
    printf("             HORA DA BATALHA                 \n");
    printf("--------------------------------------------\n");
    printf("Escolha qual atributo deseja comparar:\n");
    printf("1- População\n");
    printf("2- Área\n");
    printf("3- PIB\n");
    printf("4- Pontos Turísticos\n");
    printf("5- Densidade Demográfica\n");
    scanf("%d", &menu1);

    //Menu interativo 1
    switch (menu1)
    {
    case 1:
        somaCarta1 += populacao1;
        somaCarta2 += populacao2;
        if(populacao1 > populacao2) {
            printf("Card 1 %s - População: %lu\n", nomecidade1, populacao1);
            printf("Card 2 %s - População: %lu\n", nomecidade2, populacao2);
            printf("!!!VENCEDOR DESSA RODADA: CARD 1!!!!\n");
        }else if (populacao1 < populacao2) {
            printf("Card 1 %s - População: %lu\n", nomecidade1, populacao1);
            printf("Card 2 %s - População: %lu\n", nomecidade2, populacao2);
            printf("!!!VENCEDOR DESSA RODADA: CARD 2!!!!\n");
        }else {
            printf("Card 1 %s - População: %lu\n", nomecidade1, populacao1);
            printf("Card 2 %s - População: %lu\n", nomecidade2, populacao2);
            printf("    !!! EMPATE !!!!    \n");
        }
        break;
    case 2:
        somaCarta1 += area1;
        somaCarta2 += area2;
        if(area1 > area2) {
            printf("Card 1 %s - Área: %.2f\n",nomecidade1, area1);
            printf("Card 2 %s - Área: %.2f\n",nomecidade2, area2);
            printf("!!!VENCEDOR DESSA RODADA: CARD 1!!!!\n");
        }else if (area1 < area2) {
            printf("Card 1 %s - Área: %.2f\n",nomecidade1, area1);
            printf("Card 2 %s - Área: %.2f\n",nomecidade2, area2);
            printf("!!!VENCEDOR DESSA RODADA: CARD 2!!!!\n");
        }else {
            printf("Card 1 %s - Área: %.2f\n",nomecidade1, area1);
            printf("Card 2 %s - Área: %.2f\n",nomecidade2, area2);
            printf("    !!! EMPATE !!!!    \n");
        }
        break;
    case 3:
        somaCarta1 += pib1;
        somaCarta2 += pib2;
        if(pib1 > pib2) {
            printf("Card 1 %s - PIB: %.2f\n",nomecidade1, pib1);
            printf("Card 2 %s - PIB: %.2f\n",nomecidade2, pib2);
            printf("!!!VENCEDOR DESSA RODADA: CARD 1!!!!\n");
        }else if (pib1 < pib2) {
            printf("Card 1 %s - PIB: %.2f\n",nomecidade1, pib1);
            printf("Card 2 %s - PIB: %.2f\n",nomecidade2, pib2);
            printf("!!!VENCEDOR DESSA RODADA: CARD 2!!!!\n");
        }else {
            printf("Card 1 %s - PIB: %.2f\n",nomecidade1, pib1);
            printf("Card 2 %s - PIB: %.2f\n",nomecidade2, pib2);
            printf("    !!! EMPATE !!!!    \n");
        }
        break;
    case 4:
        somaCarta1 += pontosturisticos1;
        somaCarta2 += pontosturisticos2;
        if(pontosturisticos1 > pontosturisticos2) {
            printf("Card 1 %s - Pontos Turísticos: %d\n",nomecidade1, pontosturisticos1);
            printf("Card 2 %s - Pontos Turísticos: %d\n",nomecidade2, pontosturisticos2);
            printf("!!!VENCEDOR DESSA RODADA: CARD 1!!!!\n");
        }else if (pontosturisticos1 < pontosturisticos2) {
            printf("Card 1 %s - Pontos Turísticos: %d\n",nomecidade1, pontosturisticos1);
            printf("Card 2 %s - Pontos Turísticos: %d\n",nomecidade2, pontosturisticos2);
            printf("!!!VENCEDOR DESSA RODADA: CARD 2!!!!\n");
        }else {
            printf("Card 1 %s - Pontos Turísticos: %d\n",nomecidade1, pontosturisticos1);
            printf("Card 2 %s - Pontos Turísticos: %d\n",nomecidade2, pontosturisticos2);
            printf("    !!! EMPATE !!!!    \n");
        }
        break;
    case 5:
        somaCarta1 += inversodens1;
        somaCarta2 += inversodens2;
        if(inversodens1 < inversodens2) {
            printf("Card 1 %s - Densidade Demográfica: %.2f\n",nomecidade1, inversodens1);
            printf("Card 2 %s - Densidade Demográfica: %.2f\n",nomecidade2, inversodens2);
            printf("!!!VENCEDOR DESSA RODADA: CARD 1!!!!\n");
        }else if (inversodens1 > inversodens2) {
            printf("Card 1 %s - Densidade Demográfica: %.2f\n",nomecidade1, inversodens1);
            printf("Card 2 %s - Densidade Demográfica: %.2f\n",nomecidade2, inversodens2);
            printf("!!!VENCEDOR DESSA RODADA: CARD 2!!!!\n");
        }else {
            printf("Card 1 %s - Densidade Demográfica: %.2f\n",nomecidade1, inversodens1);
            printf("Card 2 %s - Densidade Demográfica: %.2f\n",nomecidade2, inversodens2);
            printf("    !!! EMPATE !!!!    \n");
        }
        break;
    
    default:
        printf("OPÇÃO INVÁLIDA! DIGITE APENAS OS NÚMEROS DO MENU!\n");
        break; 
    }

    //Visualização do MENU 2
    printf("--------------------------------------------\n");
    printf("             HORA DA BATALHA                 \n");
    printf("--------------------------------------------\n");
    printf("Escolha qual atributo deseja comparar:\n");
    printf("1- População\n");
    printf("2- Área\n");
    printf("3- PIB\n");
    printf("4- Pontos Turísticos\n");
    printf("5- Densidade Demográfica\n");
    scanf("%d", &menu2);

    //Menu interativo 1
    if(menu1 == menu2) {
        printf("Você escolheu a mesma opção, precisa escolher uma diferente...");
    }else {
    switch (menu2)
    {
    case 1:
        somaCarta1 += populacao1;
        somaCarta2 += populacao2;
        if(populacao1 > populacao2) {
            printf("Card 1 %s - População: %lu\n", nomecidade1, populacao1);
            printf("Card 2 %s - População: %lu\n", nomecidade2, populacao2);
            printf("!!!VENCEDOR DESSA RODADA: CARD 1!!!!\n");
        }else if (populacao1 < populacao2) {
            printf("Card 1 %s - População: %lu\n", nomecidade1, populacao1);
            printf("Card 2 %s - População: %lu\n", nomecidade2, populacao2);
            printf("!!!VENCEDOR DESSA RODADA: CARD 2!!!!\n");
        }else {
            printf("Card 1 %s - População: %lu\n", nomecidade1, populacao1);
            printf("Card 2 %s - População: %lu\n", nomecidade2, populacao2);
            printf("    !!! EMPATE !!!!    \n");
        }
        break;
    case 2:
        somaCarta1 += area1;
        somaCarta2 += area2;
        if(area1 > area2) {
            printf("Card 1 %s - Área: %.2f\n",nomecidade1, area1);
            printf("Card 2 %s - Área: %.2f\n",nomecidade2, area2);
            printf("!!!VENCEDOR DESSA RODADA: CARD 1!!!!\n");
        }else if (area1 < area2) {
            printf("Card 1 %s - Área: %.2f\n",nomecidade1, area1);
            printf("Card 2 %s - Área: %.2f\n",nomecidade2, area2);
            printf("!!!VENCEDOR DESSA RODADA: CARD 2!!!!\n");
        }else {
            printf("Card 1 %s - Área: %.2f\n",nomecidade1, area1);
            printf("Card 2 %s - Área: %.2f\n",nomecidade2, area2);
            printf("    !!! EMPATE !!!!    \n");
        }
        break;
    case 3:
        somaCarta1 += pib1;
        somaCarta2 += pib2;
        if(pib1 > pib2) {
            printf("Card 1 %s - PIB: %.2f\n",nomecidade1, pib1);
            printf("Card 2 %s - PIB: %.2f\n",nomecidade2, pib2);
            printf("!!!VENCEDOR DESSA RODADA: CARD 1!!!!\n");
        }else if (pib1 < pib2) {
            printf("Card 1 %s - PIB: %.2f\n",nomecidade1, pib1);
            printf("Card 2 %s - PIB: %.2f\n",nomecidade2, pib2);
            printf("!!!VENCEDOR DESSA RODADA: CARD 2!!!!\n");
        }else {
            printf("Card 1 %s - PIB: %.2f\n",nomecidade1, pib1);
            printf("Card 2 %s - PIB: %.2f\n",nomecidade2, pib2);
            printf("    !!! EMPATE !!!!    \n");
        }
        break;
    case 4:
        somaCarta1 += pontosturisticos1;
        somaCarta2 += pontosturisticos2;
        if(pontosturisticos1 > pontosturisticos2) {
            printf("Card 1 %s - Pontos Turísticos: %d\n",nomecidade1, pontosturisticos1);
            printf("Card 2 %s - Pontos Turísticos: %d\n",nomecidade2, pontosturisticos2);
            printf("!!!VENCEDOR DESSA RODADA: CARD 1!!!!\n");
        }else if (pontosturisticos1 < pontosturisticos2) {
            printf("Card 1 %s - Pontos Turísticos: %d\n",nomecidade1, pontosturisticos1);
            printf("Card 2 %s - Pontos Turísticos: %d\n",nomecidade2, pontosturisticos2);
            printf("!!!VENCEDOR DESSA RODADA: CARD 2!!!!\n");
        }else {
            printf("Card 1 %s - Pontos Turísticos: %d\n",nomecidade1, pontosturisticos1);
            printf("Card 2 %s - Pontos Turísticos: %d\n",nomecidade2, pontosturisticos2);
            printf("    !!! EMPATE !!!!    \n");
        }
        break;
    case 5:
        somaCarta1 += inversodens1;
        somaCarta2 += inversodens2;
        if(inversodens1 < inversodens2) {
            printf("Card 1 %s - Densidade Demográfica: %.2f\n",nomecidade1, inversodens1);
            printf("Card 2 %s - Densidade Demográfica: %.2f\n",nomecidade2, inversodens2);
            printf("!!!VENCEDOR DESSA RODADA: CARD 1!!!!\n");
        }else if (inversodens1 > inversodens2) {
            printf("Card 1 %s - Densidade Demográfica: %.2f\n",nomecidade1, inversodens1);
            printf("Card 2 %s - Densidade Demográfica: %.2f\n",nomecidade2, inversodens2);
            printf("!!!VENCEDOR DESSA RODADA: CARD 2!!!!\n");
        }else {
            printf("Card 1 %s - Densidade Demográfica: %.2f\n",nomecidade1, inversodens1);
            printf("Card 2 %s - Densidade Demográfica: %.2f\n",nomecidade2, inversodens2);
            printf("    !!! EMPATE !!!!    \n");
        }
        break;
    
    default:
        printf("OPÇÃO INVÁLIDA! DIGITE APENAS OS NÚMEROS DO MENU!\n");
        break;
    }
    }
    //Visualização do Resultado Final
    printf("--------------------------------------------\n");
    printf("             RESULTADO FINAL                 \n");
    printf("--------------------------------------------\n");
    printf("Card 1 - %s SOMA FINAL: %lu\n", nomecidade1, somaCarta1);
    printf("Card 2 - %s SOMA FINAL: %lu\n", nomecidade2, somaCarta2);
    printf("--------------------------------------------\n");
    if (somaCarta1 > somaCarta2) {
        printf("Card 1 - %s GANHOU, PARABÉNS!!!\n", nomecidade1);
        printf("--------------------------------------------\n");
    }else if (somaCarta1 < somaCarta2) {
        printf("Card 2 - %s GANHOU, PARABÉNS!!!\n", nomecidade2);
        printf("--------------------------------------------\n");
    }else {
        printf("!!!HOUVE UM EMPATE!!!\n");
        printf("--------------------------------------------\n");
    }
    


    return 0;






}
