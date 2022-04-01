#include <stdio.h>

int fat(int n);

int main() {
    int x, res;

    scanf("%d", &x);
    res = fat(x);

    printf("%d\n", res);
    return 0;
}

//Fatorial - Função Iterativa 
/*
int fat(int n) {
    int vfat, i;
    if (n == 0){
        return 1;
    }
    else {
        vfat = 1;
        for(i=n; i >1; i--){
            vfat = vfat * i;
        }
    }
    return vfat;
}
*/

// Função Recursiva 
    /*
    A função recursiva é aquela que chama a si mesma
    Várias funções sao chamadas e, consequentemente empilhadas na Pilha
    */
int fat(int n){
    int vfat;
    if(n<=1){
        return 1;
    }
    vfat = n * fat(n - 1);
    return vfat;
}