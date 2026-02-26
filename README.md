# Relatório – Algoritmos de Ordenação em C

## 1. Introdução

Este trabalho tem como objetivo implementar e analisar o desempenho de diferentes algoritmos de ordenação utilizando a linguagem C. Foram implementados os seguintes algoritmos:

- Bubble Sort  
- Selection Sort  
- Insertion Sort  
- Merge Sort  
- Quick Sort  

Os algoritmos foram testados com vetores de diferentes tamanhos para comparar seu desempenho em termos de tempo de execução.

---

## 2. Implementação dos Algoritmos

Todos os algoritmos foram implementados em C utilizando vetores de inteiros e funções específicas para cada método de ordenação.

### Bubble Sort

O Bubble Sort percorre o vetor várias vezes, comparando pares de elementos adjacentes e trocando-os quando estão fora de ordem. Esse processo se repete até que o vetor esteja completamente ordenado.

- **Complexidade:** O(n²)  
- **Característica:** simples, porém ineficiente para grandes volumes de dados.

---

### Selection Sort

O Selection Sort busca o menor elemento do vetor e o posiciona na primeira posição, repetindo esse processo para as próximas posições.

- **Complexidade:** O(n²)  
- **Característica:** poucas trocas, porém muitas comparações.

---

### Insertion Sort

O Insertion Sort constrói o vetor ordenado gradualmente, inserindo cada novo elemento na posição correta.

- **Complexidade:** O(n²) (melhor caso O(n))  
- **Característica:** eficiente para vetores pequenos ou quase ordenados.

---

### Merge Sort

O Merge Sort utiliza a estratégia de divisão e conquista, dividindo o vetor recursivamente e depois intercalando os resultados de forma ordenada.

- **Complexidade:** O(n log n)  
- **Característica:** desempenho estável e eficiente, porém usa memória extra.

---

### Quick Sort

O Quick Sort escolhe um pivô e reorganiza o vetor colocando os menores valores à esquerda e os maiores à direita, aplicando recursão.

- **Complexidade média:** O(n log n)  
- **Pior caso:** O(n²)  
- **Característica:** geralmente o mais rápido na prática.

---

## 3. Resultados dos Testes

Os testes foram realizados utilizando vetores com diferentes tamanhos. O tempo de execução foi medido usando funções de tempo da linguagem C.

**Observações:**

- Bubble Sort e Selection Sort apresentaram os piores desempenhos, especialmente para vetores grandes.  
- Insertion Sort teve bom desempenho para vetores pequenos.  
- Merge Sort e Quick Sort foram os mais rápidos, mantendo tempos baixos mesmo com vetores grandes.

---

## 4. Comparação de Desempenho

| Algoritmo      | Complexidade | Desempenho Geral |
|----------------|--------------|------------------|
| Bubble Sort    | O(n²)        | Ruim             |
| Selection Sort | O(n²)        | Ruim             |
| Insertion Sort | O(n²)        | Médio            |
| Merge Sort     | O(n log n)   | Muito bom        |
| Quick Sort     | O(n log n)   | Excelente        |

**Conclusão:**  
Para grandes volumes de dados, os algoritmos mais eficientes são Quick Sort e Merge Sort, enquanto os algoritmos quadráticos são mais indicados apenas para fins didáticos.

---

## 5. Conclusão

Através deste trabalho, foi possível compreender o funcionamento e o desempenho dos principais algoritmos de ordenação. Observou-se claramente a superioridade dos algoritmos de complexidade **O(n log n)** em relação aos algoritmos **O(n²)**, especialmente em vetores de grande tamanho.