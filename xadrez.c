#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    // --- Movimento da Torre (usando for) ---
    // A Torre se move 5 casas para a direita.
    printf("--- Movimento da Torre ---\n");
    for (int i = 0; i < 5; i++) { // Loop 'for' para simular 5 movimentos
        printf("Direita\n"); // Imprime a direção do movimento
    }
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    // --- Movimento do Bispo (usando while) ---
    // O Bispo se move 5 casas na diagonal para cima e à direita.
    printf("--- Movimento do Bispo ---\n");
    int casas_bispo = 0; // Inicializa o contador de casas para o Bispo
    while (casas_bispo < 5) { // Loop 'while' para simular 5 movimentos
        printf("Cima, Direita\n"); // Imprime as direções combinadas para a diagonal
        casas_bispo++; // Incrementa o contador de casas
    }
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    // --- Movimento da Rainha (usando do-while) ---
    // A Rainha se move 8 casas para a esquerda.
    printf("--- Movimento da Rainha ---\n");
    int casas_rainha = 0; // Inicializa o contador de casas para a Rainha
    do {
        printf("Esquerda\n"); // Imprime a direção do movimento
        casas_rainha++; // Incrementa o contador de casas
    } while (casas_rainha < 8); // Loop 'do-while' para simular 8 movimentos (garante que o bloco execute pelo menos uma vez)
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    return 0; // Indica que o programa foi executado com sucesso
}
