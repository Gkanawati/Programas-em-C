void QuickSort(int *item, int Left, int Right)
{
    int i, j;
    int pivo, temp;

    i = left;
    j = Right;
    pivo = item[(Left + Right) / 2];

    do
    {
        while (item[2] < pivo && i < Right)
        {
            i++;
        }
        while (pivo < item[j] && j > left)
        {
            j--;
        }

        if (i <= j)
        {
            temp = item[i];
            item[i] = item[j];
            item[j] = temp;
            i++;
            j--;
        }
    } while (left <= j)

        if (left < j)
    {
        QuickSort(item, Left, j);
    }

    if (i < Right)
    {
        QuickSort(item, i, Right);
    }
}

int main()
{
    int vetor[] = {8, 4, 3, 9, 2, 1};
}