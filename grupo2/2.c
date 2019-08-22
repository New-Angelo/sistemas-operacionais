#include<stdlib.h>
#include<stdio.h>

int main(void)
{
    int n = 0;

    printf("IMPRIMINDO TABELA ASCII\n\n");

    for ( n = 1; n < 128; n++ )
    {
        printf("Decimal: %i\t Hexadecimal: %x\t\t", n, n);

        if (n > 32)
            printf("Caracter: %c",n);

        printf("\n");
    }

    
    
    system("pause");
    
    return 0;
}