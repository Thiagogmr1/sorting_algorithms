#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selectionSort(int arr[], int n)
{
    int min, aux;

    for (int i = 0; i < n - 1; i++)
    {
        min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            aux = arr[i];
            arr[i] = arr[min];
            arr[min] = aux;
        }
    }
}

void preencherArray(int arr[], int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
}

int main()
{
    int arr[TAM];
    clock_t inicio, fim;
    double tempo;

    preencherArray(arr, TAM);

    printf("Array original:\n");
    printArray(arr, TAM);

    inicio = clock();
    selectionSort(arr, TAM);
    fim = clock();

    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("\nArray ordenado:\n");
    printArray(arr, TAM);

    printf("\nTempo: %lf segundos\n", tempo);

    return 0;
}