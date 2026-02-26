#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n) {
    int aux;

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}

void preencherArray(int arr[], int n) {
    srand(time(NULL));
    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
}

int main() {
    int arr[TAM];
    int opcao;
    clock_t inicio, fim;
    double tempo;

    do {
        printf("\n=== MENU ===\n");
        printf("1 - Executar Bubble Sort\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if(opcao == 1) {
            preencherArray(arr, TAM);

            printf("\nArray original:\n");
            printArray(arr, TAM);

            inicio = clock();
            bubbleSort(arr, TAM);
            fim = clock();

            tempo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

            printf("\nArray ordenado:\n");
            printArray(arr, TAM);

            printf("\nTempo de execucao: %lf segundos\n", tempo);
        }

    } while(opcao != 0);

    return 0;
}