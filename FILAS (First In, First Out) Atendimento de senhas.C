#include <stdio.h>
#include <stdlib.h>

#define MAX 5

// Estrutura da fila
typedef struct {
    int itens[MAX];
    int frente;
    int traseira;
} Fila;

// Função para inicializar a fila
void inicializar(Fila *f) {
    f->frente = 0;
    f->traseira = -1;
}

// Função para verificar se a fila está cheia
int cheia(Fila *f) {
    return f->traseira == MAX - 1;
}

// Função para verificar se a fila está vazia
int vazia(Fila *f) {
    return f->frente > f->traseira;
}

// Função para enfileirar (adicionar senha)
void enfileirar(Fila *f, int senha) {
    if (!cheia(f)) {
        f->traseira++;
        f->itens[f->traseira] = senha;
    } else {
        printf("Fila cheia! Não é possível gerar mais senhas.\n");
    }
}

// Função para desenfileirar (atender senha)
int desenfileirar(Fila *f) {
    if (!vazia(f)) {
        return f->itens[f->frente++];
    } else {
        printf("Fila vazia! Nenhuma senha para atender.\n");
        return -1;
    }
}

int main() {
    Fila fila;
    inicializar(&fila);

    // Gerando 5 senhas na fila
    printf("Gerando 5 senhas:\n");
    for (int i = 1; i <= MAX; i++) {
        enfileirar(&fila, i);
        printf("Senha %d gerada.\n", i);
    }

    printf("\nAtendimento:\n");
    // Atendendo os clientes (desenfileirando)
    while (!vazia(&fila)) {
        int senha = desenfileirar(&fila);
        if (senha != -1) {
            printf("Atendendo senha %d\n", senha);
        }
    }

    return 0;
}
