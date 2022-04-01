#include <stdio.h>
#include <stdlib.h>

typedef struct cont
{
    char nome[100];
    char endereco[200];
    int idade;
} Contato;

void exibeContatos(FILE *fp);
void insertContato(Contato contato, FILE *fp);

int main()
{

    Contato contatos;
    int opcao = 0;
    FILE *fp;

    do
    {
        fp = fopen("Dados.dat", "a+");
        if (fp == NULL)
        {
            printf("Erro, nao foi possivel abrir o arquivo\n");
            return 0;
        }

        printf("\n1-) Cadastrar novo contato ao final do arquivo\n2-) Exibir todos os contatos\n3-) Sair\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Cadastrar novo contato;\n");
            insertContato(contatos, fp);
            break;

        case 2:
            printf("Exibindo todos os contatos:\n");
            exibeContatos(fp);
            break;

        case 3:
            printf("Programa finalizado.\n");
            return 0;

        default:
            printf("Valor invalido!\n");
            fclose(fp);
            break;
        }
    } while (opcao != 3);

    printf("Programa finalizado.\n");
    fclose(fp);
    return 0;
}
void insertContato(Contato contato, FILE *fp)
{
    char *ne;
    int *id, barraene;
    scanf("%d", &barraene); // apenas para pegar o \n anterior
    fgets(contato.nome, 100, stdin);

    fgets(contato.endereco, 200, stdin);

    scanf("%d", &contato.idade);

    fputs(contato.nome, fp);
    fputs(contato.endereco, fp);
    fprintf(fp, "Idade: %d\n", contato.idade);
    fclose(fp);
}
void exibeContatos(FILE *fp)
{

    char str[80];

    while (fgets(str, sizeof(str), fp) != NULL)
    {
        printf("%s", str);
    }
    fclose(fp);
}