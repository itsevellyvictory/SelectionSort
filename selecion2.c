#include <stdio.h>
#include <stdlib.h>

int gerarNumerosAleatorios()
{
    return rand() % 10 + 1;
}

void selectionSort(int vetor[], int tamanho)
{
    int posicao = 0, elemento = 0, aux;

    for (posicao = 0; posicao < tamanho - 1; posicao++)
    {

        for (elemento = posicao + 1; elemento < tamanho; elemento++)
        {
            if (vetor[posicao] > vetor[elemento])
            {
                aux = vetor[posicao];
                vetor[posicao] = vetor[elemento];
                vetor[elemento] = aux;
            }
        }
    }
}

int main()
{

    int tamanho;

    printf("\nDigite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vetor = (int *)malloc(tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = gerarNumerosAleatorios();
    }
    printf("Vetor original:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf(" %d ", vetor[i]);
    }

    selectionSort(vetor, tamanho);

    printf("\nVetor Ordenado: \n");
    for (int i = 0; i < tamanho; i++)
    {
        printf(" %d ", vetor[i]);
    }

    free(vetor);
    return 0;
}