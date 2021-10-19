#include <stdio.h>

int main()
{

    // declaração

    int tamLin = 5;
    int tamCol = 5;

    char m1[tamLin][tamCol];

    int tamCol2 = 7;
    char m2[tamLin][tamCol2];

    int i, j;

    // Leitura por fgets
    for (i = 0; i < tamLin; i++)
    {
        fgets(m2[i], tamCol2, stdin);
    }

    // Leitura por scanf
    char aux;
    for(i=0; i<tamLin; i++){
        for(j=0; j<tamCol; j++){
            do{
                scanf("%c", &aux);
            }while((aux == "\n") || (aux == "\r"));
            m1[i][j] =  aux;
        }
    }

    // Escrita - matriz 2 (fgets)
    for(i=0; i<tamLin; i++){
        printf("s\n", m2[i]);
    }

    // Escrita - matriz 1 (scanf)
    for(i=0; i<tamLin; i++){
        for(j=o;j<tamCol;j++){
            printf("%c", m1[i][j]);
        }
        printf("\n");
    }





    return 0;
}