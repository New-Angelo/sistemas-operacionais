#include <stdio.h>

void menu() {
    printf("\n1) Opcao 1: a vista com 10 porcento de desconto\n2) Opcao 2: em duas vezes (preco da etiqueta) \n3) Opcao 3: de 3 ate 10 vezes com 3 porcento de juros ao mes (somente para compras acima de R$ 100,00).");
    printf("\nDigite a opcao desejada(1,2 ou 3):");
}

float op1(float a){
    return a=a*0.9;
}

float op2(float a){
    return a=a/2;
}

float op3(float a){
    int p;
    
    printf("Quantas vezes deseja parcelar:");
    scanf("%d",&p);
    while((p>10)||(p<3)){
        printf("Opcao invalida! Digite novamente(parcelas de 3 a 10):");
        scanf("%d",&p);
    }
    printf("Total a pagar de %dX de",p);
    return a/p;
    

}

int main(){
    float a;
    int b,n=0;

    printf("Insira o total gasto:");
    scanf("%f",&a);
    menu();
    scanf("%d",&b);
do{
    switch (b){

        case 1:
            printf("Total a pagar R$: %.2f",op1(a));
            n=1;
            break;
        case 2:
            printf("Total a pagar 2X de R$: %.2f",op2(a));
            n=1;
            break;
        case 3:
            if(a<100){
                b=0;
                printf("ERRO: valor menor que R$:100,00 nao e possivel parcelar!\n");
                break;
            }
            printf(" R$: %.2f",op3(a));
            n=1;
            break;        
        
        default:
            b=0;
            printf("\n**Opcao incorreta digite novamente**\n");
            menu();
            scanf("%d",&b);
            break;
    }
} while(n==0);
    
    return 0;
}