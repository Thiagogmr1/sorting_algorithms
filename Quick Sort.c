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

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    int aux;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            aux = arr[i];
            arr[i] = arr[j];
            arr[j] = aux;
        }
    }

    aux = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = aux;

    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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
    quickSort(arr, 0, TAM - 1);
    fim = clock();

    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("\nArray ordenado:\n");
    printArray(arr, TAM);

    printf("\nTempo: %lf segundos\n", tempo);

    return 0;
}