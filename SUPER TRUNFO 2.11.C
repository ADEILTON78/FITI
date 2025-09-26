#include <stdio.h>

int main (){

    //carta 1
    char carta1[20]; 
    char estado1[20];
    char cidade1[20];
    char codigo1[20];
    int pontoturisticos1; 
    int populacao1;
    float area1; 
    float pib1;
    float densidade1;
    float rendapercapita1; 
    float superpoder1;
   
    //carta2
    char carta2[20]; 
    char estado2[20];  
    char cidade2[20];
    char codigo2[20];
    int pontoturisticos2; 
    int populacao2;
    float area2; 
    float pib2;
    float densidade2;
    float rendapercapita2; 
    float superpoder2;

    int resultado;
   
    //dados da carta 1
    printf("==carta1==\n");

    printf("carta1:");  
    scanf("%s" , carta1);

    printf("estado1:");
    scanf("%s" , estado1);

    printf("cidade1:"); 
    scanf("%s" , cidade1);

    printf("codigo1:");
    scanf("%s" , codigo1);

    printf("pontoturisticos1:");
    scanf("%d" , &pontoturisticos1);

    printf("populacao1:");
    scanf("%f" , &populacao1);

    printf("area1(km²):");
    scanf("%f" , &area1);

    printf("pib1(Bilhoes):");
    scanf("%f" , &pib1);

   

    //calculos
    densidade1 = (float) populacao1 / area1;
    rendapercapita1 = (float) pib1 / populacao1;
    superpoder1 = (float) populacao1 + area1 + pib1 + pontoturisticos1 + rendapercapita1 + (1.0/densidade1);
    
    printf("===resultado===\n");

    printf("densidade1:%f\n" , densidade1);
    printf("rendapercapita1:%f\n" , rendapercapita1);
    printf("superpoder1:%f\n" , superpoder1);

    //dados da carta 2
    printf("====carta2====\n");

    printf("carta2:");  
    scanf("%s" , carta2);

    printf("estado2:");
    scanf("%s" , estado2);

    printf("cidade2:"); 
    scanf("%s" , cidade2);

    printf("codigo2:");
    scanf("%s" , codigo2);

    printf("pontoturisticos2:");
    scanf("%d" , &pontoturisticos2);

    printf("populacao2:");
    scanf("%f" , &populacao2);

    printf("area2(km2):");
    scanf("%f" , &area2);

    printf("pib2(Bilhoes):");
    scanf("%f" , &pib2);


    //calculo divisao
    densidade2 = (float)populacao2 / area2;
    rendapercapita2 = (float)pib2 / populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + pontoturisticos2 + rendapercapita2 + (1.0/densidade2);
    
    printf("===resultado===\n");
    
    printf("densidade2:%f\n" , densidade2);
    printf("rendapercapita2:%f\n" , rendapercapita2);
    printf("superpoder2:%f\n" , superpoder2);

    // calculo da comparacao e resultado  

    resultado = pontoturisticos1 > pontoturisticos2;
    printf("pontoturisticos: %d(1=carta1 vence, 0=carta2 vence)\n" , resultado);

    resultado = populacao1 > populacao2;
    printf("populacao: %d(1=carta1 vence, 0=carta2 vence)\n" , resultado);

    resultado = area1 > area2;
    printf("area: %d(1=carta1 vence, 0=carta2 vence)\n" , resultado);

    resultado = rendapercapita1 > rendapercapita2;
    printf("rendapercapita: %d(1=carta1 vence, 0=carta2 vence)\n" , resultado);

    resultado = densidade1 < densidade2;
    printf("densidade: %d(1=carta1 vence, 0=carta2 vence)\n") , resultado;

    resultado = superpoder1 > superpoder2;
    printf("superpoder: %d(1=carta1 vence, 0=carta2 vence)\n") , resultado;


    


 

 



return 0;



}













