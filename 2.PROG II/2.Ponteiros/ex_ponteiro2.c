#include <stdio.h>

int main(){

    float *p, x;
    p = &x;
    *p = 155;        /*      Pilha-Main (Espaço de Memória)
                          _____________________________________________
                          |       _____                                |
                          |   *p |0x002|   Endereço físico 0x123       |
                          |                                            |
                          |        |                                   |
                          |        \/                                  |
                          |       _____                                |
                          |    x | 155 |  Endereço de memória -> 0x002 |
                          |                                            |
                          |____________________________________________|
                                                                    */

    printf("%p", x);

    return 0;
}