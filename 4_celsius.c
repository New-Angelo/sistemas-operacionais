#include <stdio.h>

int main(){

    double  f,c1;
    int  c2;

    printf("Informe a temperatura em fahrenheit:");
    scanf("%lf",&f);
    c1= (f-32.0)*(5.0/0.9);
    
    c2= (f-32)*(5/9);
    printf("valor em celsius:%.1lf (double)\n",c1);
    printf("valor em celsius:%d (int)",c2);
    return 0;
}