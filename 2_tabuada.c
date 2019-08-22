#include <stdio.h>

int main(){
    int x,y,n;

    for(x=1;x<10;x++){
        printf("\nTabela do %d:\n\n",x);
        for(y=1;y<=10;y++){
            n=x*y;
            printf("%d X %d = %d\n",x,y,n);
        }
    }
    return 0;
}