#include <stdio.h>

double potencia(double x, int y){
    double n=x;
    for(;y>1;y--){
        n=n*x;
    }
    return n;
}

int main(){
    double x;
    int y;
    printf("informe um numero:");
    scanf("%lf",&x);
    printf("informe a potencia que sera elevado:");
    scanf("%ld",&y);
    printf("\nResultado: %.1lf",potencia(x,y));

}
