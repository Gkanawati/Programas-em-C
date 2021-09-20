#include <stdio.h>
#include <string.h>

int main()
{
    char str[2000];
    scanf("%[^\n]s", str);

    int word_size = 0;
    int greatest = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        while (str[i] != ' ' && str[i + 1] != '\n' && str[i] != '.')
        {
            word_size++;
            i++;
        }
        if (word_size > greatest)
        {
            greatest = word_size;
        }
        word_size = 0;
    }

    printf("%d\n", greatest);

    return 0;
}