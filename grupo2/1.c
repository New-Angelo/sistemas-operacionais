#include <stdio.h>

int main(){

    int x,y,n;

    printf("Informe o primeiro valor:");
    scanf("%d",&x);
    printf("Informe o segundo valor:");
    scanf("%d",&y);

    if(x<y){
        n=x;
        printf("**Primeiro valor menor que o segundo**\nlista ordem crecente:\n");
        for(;n<=y;n++){
            printf("%d\n",n);
        }
        printf("\nlista ordem decrescente:\n");
        n--;
        for(;n>=x;n--){
            printf("%d\n",n);
        }
    }
    if(x==y){
        printf("\nvalores iguais!");
    }
    return 0;

}
