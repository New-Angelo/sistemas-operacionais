 #include <stdio.h>

int main(){

    float numero_1, numero_2,resultado;
    char operador;


    printf("Entre com o primeiro valor: ");
    scanf("%f",&numero_1);

    fflush(stdin); // Limpar o buffer do teclado

    printf("Entre com o operador(+, -, *, /):");
    scanf("%c",&operador);

    printf("Entre com o segundo valor : ");
    scanf("%f",&numero_2);

        switch (operador){

        case '+':

            resultado = numero_1+numero_2;
            break;

        case '-':

            resultado = numero_1-numero_2;
            break;

        case '*':

            resultado = numero_1*numero_2;
            break;

        case '/':

            resultado = numero_1/numero_2;
            break;

        }
    if(numero_2 == 0){
        printf("ERRO! Denominador igual a 0(Zero).\n");

    }else{
        printf("%.2f %c %.2f = %.2f.\n\n",numero_1,operador,numero_2,resultado);
        }


    return(0);
}