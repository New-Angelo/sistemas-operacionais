 #include <stdio.h>

 float inflacao (float preco){
    if(preco < 100){

        preco = preco * 1.1;

    }else{

        preco = preco * 1.2;

    }
    return preco;
 }

int main(){

float preco;

printf("Entre com o preco do produto: \n");
scanf("%f",&preco);

printf("Preco inflacionado: %.2f",inflacao(preco));

return (0);

}