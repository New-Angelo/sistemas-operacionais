#include <stdio.h>

int main(){
    float n,d,c,m;
    printf("Informe um valor em metros:");
    scanf("%f", &n);
    d=n*10;
    c=n*100;
    m=n*1000;
    printf("\n**Valor convertido**\n\n");
    printf("%.1f decimetros\n",d);
    printf("%.1f centimetros\n",c);
    printf("%.1f milimetros\n",m);
    return 0;
}
