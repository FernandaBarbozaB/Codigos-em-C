#include <stdio.h>

int main() {
    int arr[6];
    int maior, menor;
    int posMaior = 0, posMenor = 0;

    // Coletando os valores do usuário
    printf("Digite 6 números inteiros:\n");
    for (int i = 0; i < 6; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &arr[i]);

        // Inicializando maior e menor com o primeiro valor
        if (i == 0) {
            maior = menor = arr[i];
        }

        // Atualizando maior e menor
        if (arr[i] > maior) {
            maior = arr[i];
            posMaior = i;
        }
        if (arr[i] < menor) {
            menor = arr[i];
            posMenor = i;
        }
    }

    // Exibindo os resultados
    printf("\nMaior valor: %d na posição %d\n", maior, posMaior);
    printf("Menor valor: %d na posição %d\n", menor, posMenor);

    return 0;
}
