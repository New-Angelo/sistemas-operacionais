#include <stdio.h>


int main(){

    int hex[10];
    int numero,resultado,controle2,controle =0,base;

    printf("Entre com um valor em DECIMAL.\n");
    scanf("%d",&numero);

    resultado = numero;

    printf("************************************************************\n");
    printf("Seleciona a BASE para qual base sera transformado o numero.\n\n");
    printf("HEXADECIMAL - TECLE 1\n");
    printf("OCATAL - TECLE 2\n");
    printf("************************************************************\n");
    scanf("%d",&base);

    if(base == 1){
        base = 16;
    }else{
        base = 8;
    }


            for(;;){

                // Comandos para evitar um 0(zero) na frente dos numeros, menores
                // que a base, depois da transformação.

                if(numero / base < base){
                    hex[controle] = resultado % base;
                    controle = controle-1;
                    break;
                }

                hex[controle] = resultado % base;
                resultado = resultado / base;

                if(resultado < base){

                   hex[controle+1] = resultado;
                   break;

                }
                controle++;
            }

            for(controle2 = controle+1; controle2 >= 0; controle2--){


                switch(hex[controle2]){

                    case 10:
                        printf("A");
                        break;
                    case 11:
                        printf("B");
                        break;
                    case 12:
                        printf("C");
                        break;
                    case 13:
                        printf("D");
                        break;
                    case 14:
                        printf("E");
                        break;
                    case 15:
                        printf("F");
                        break;
                    default:
                        printf("%d",hex[controle2]);

                }

            }

return(0);

} 