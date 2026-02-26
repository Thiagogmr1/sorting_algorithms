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

void insertionSort(int arr[], int n)
{
    int key, j;

    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
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
    insertionSort(arr, TAM);
    fim = clock();

    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("\nArray ordenado:\n");
    printArray(arr, TAM);

    printf("\nTempo: %lf segundos\n", tempo);

    return 0;
}