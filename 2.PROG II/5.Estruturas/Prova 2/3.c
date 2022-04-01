#include <stdio.h>
#include <stdlib.h>

typedef struct cont
{
    char nome[100];
    char endereco[200];
    int idade;
} Contato;

void exibeContatos(FILE *fp)
{
    char row[100];
    char *result;
    fp = fopen("dados.dat", "rt");
    if (fp == NULL)
    {
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    while (!feof(fp))
    {
        result = fgets(row, 100, fp);
        if (result)
            printf("%s", row);
    }
    fclose(fp);
}

void insertContato(Contato contato, FILE *fp)
{
    int *id, espacoenter;
    scanf("%d", &espacoenter);
    fgets(contato.nome, 100, stdin);
    fgets(contato.endereco, 200, stdin);
    scanf("%d", &contato.idade);
    fputs(contato.nome, fp);
    fputs(contato.endereco, fp);
    fprintf(fp, "Idade: %d\n", contato.idade);
    fclose(fp);
}

int main()
{
    Contato contact;
    int choice;
    FILE *fp;

    do
    {
        fp = fopen("Dados.dat", "a+");
        if (fp == NULL)
        {
            printf("Erro, nao foi possivel abrir o arquivo\n");
            return 0;
        }
        else
        {
            printf("1-) Cadastrar novo contato ao final do arquivo\n");
            printf("2-) Exibir todos os contatos\n");
            printf("3-) Sair\n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                printf("Cadastrar um novo contato:\n");
                insertContato(contact, fp);
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
        }
    } while (choice != 3);
    {
        printf("Programa finalizado.\n");
        fclose(fp);
        return 0;
    }
}