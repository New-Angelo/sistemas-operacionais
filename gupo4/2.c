#include <stdio.h>

//fatorial recursivo.
int fatrec (int n) {

    if ((n==1) || (n==0)){ 
        return 1;
    }               
    else{
        return fatrec(n-1)*n;
    }
}
//fatorial com laço.
int fatla (int n){

    if ((n==1) || (n==0)){ 
        return 1;
    } 
    int x=n;
    while(x>1){
        n=n*(x-1);
        x--;
    }
    return n;
}

int main () {

    int n;

    printf("Informe o numero que deseja obter o fatorial:");
    scanf("%d",&n);
    printf("Fatorial recursivo = %d \n",fatrec (n));
    printf("Fatorial com laco = %d \n",fatla (n));

    return 0;
}