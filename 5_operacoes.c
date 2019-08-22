#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main(){

    int x,y,n;
    double n1;

    printf("Informe o primeiro valor:");
    scanf("%d",&x);

    printf("Informe o segundo valor:");
    scanf("%d",&y);
    
    //letra a
    n=x+y;
    printf("A soma dos valores: %d\n",n);
    //letra b
    n=x*pow(y,2);
    printf("O produto do primeiro numero pelo quadrado do segundo: %d\n",n);
    //letra c
    printf("O quadrado do primeiro numero: %.1lf\n",pow(x,2));
    //letra d
    n1=sqrt(pow(x,2)+pow(y,2));
    printf("A raiz quadrada da soma dos quadrados: %.1lf\n", n1);
    //letra e
    printf("O seno da diferenca do primeiro numero pelo segundo: %.4f\n", sin(((x-y)*PI)/180));
    //letra f
    printf("O modulo do primeiro numero: %.1lf\n", fabs(x));

}