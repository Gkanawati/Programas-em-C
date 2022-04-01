#include <stdio.h>
#include <stdlib.h>

void prefeitura(float *salario, float *numFilhos);

int main(void)
{
    float salario;
    float numFilhos;

    prefeitura(&salario, &numFilhos);

    printf("Media Salario: %f - Media Filhos: %f", salario, numFilhos);
    
    return 0;
}
    
void prefeitura(float *salario, float *numFilhos){
    float sal, somaSal=0;
    int nf, somanNf=0, cont=0;

    do{
        scanf("%f", &sal);
        scanf("%d", &nf);
        if(sal != -1){
            cont++;
            somaSal = somaSal + sal;
            somanNf = somanNf + nf;
        }
    }while(sal != -1);

    *salario = somaSal/cont;
    *numFilhos = somanNf/cont;
}