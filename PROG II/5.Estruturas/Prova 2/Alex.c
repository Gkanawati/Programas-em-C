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
    Contato cont;
    int option = 0, enquanto = 0;
    FILE *fp;

    if (fp == NULL)
    {
        printf("Nao e possivel abrir o arquivo\n");
    }

    while (enquanto == 0)
    {

        printf("1-) Cadastrar novo contato ao final do arquivo\n");
        printf("2-) Exibir todos os contatos\n");
        printf("3-) Sair\n");

        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Cadastrar um novo contato:\n");
            insertContato(cont, fp);
            break;
        case 2:
            printf("Exibindo os contatos:\n");
            exibeContatos(fp);
            break;
        case 3:
            printf("Fim do programa\n");
            enquanto = 3;
            break;
        default:
            printf("Comando inválido\n");
            break;
        }
    }
}

void exibeContatos(FILE *fp)
{
    char Linha[100];
    char *result;
    fp = fopen("dados.dat", "rt");
    if (fp == NULL)
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    while (!feof(fp))
    {
        result = fgets(Linha, 100, fp);
        if (result)
            printf("%s", Linha);
    }
    fclose(fp);
}

void insertContato(Contato contato, FILE *fp)
{

    fflush(stdin);
    fgets(contato.nome, 100, stdin);
    fflush(stdin);
    fgets(contato.endereco, 200, stdin);
    scanf("%d", &contato.idade);

    int result;
    fp = fopen("dados.dat", "a+");
    if (fp == NULL)
    {
        printf("Problemas na CRIACAO do arquivo\n");
        return;
    }

    result = fprintf(fp, "Nome: %sEndereco: %sIdade: %d\n-------------------- \n", contato.nome, contato.endereco, contato.idade);
    if (result == EOF)
        printf("Erro na Gravacao\n");
    fclose(fp);
}