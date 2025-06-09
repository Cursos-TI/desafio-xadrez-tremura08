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

    // --- Movimento do Cavalo (usando loops aninhados: for e while) ---
    // O Cavalo se move em 'L'. Vamos simular um movimento de 2 casas para baixo e 1 casa para a esquerda.
    // Para simplificar a visualização do movimento em 'L', vamos "quebrar" a movimentação em duas partes,
    // que juntas formam o 'L'.

    printf("--- Movimento do Cavalo ---\n");

    // Loop externo 'for': Simula o movimento vertical (para baixo) do 'L'
    // Vamos simular 2 "L's" completos para baixo e para a esquerda
    for (int l_move = 0; l_move < 2; l_move++) { // Loop para simular dois movimentos completos em 'L'
        printf("Movimento L %d:\n", l_move + 1);

        // Primeira parte do 'L': 2 casas para baixo
        int casas_para_baixo = 0; // Contador para o movimento vertical
        while (casas_para_baixo < 2) { // Loop 'while' para mover 2 casas para baixo
            printf("  Baixo\n"); // Imprime a direção
            casas_para_baixo++; // Incrementa o contador
        }

        // Segunda parte do 'L': 1 casa para a esquerda
        // Este é um movimento fixo de 1 casa, mas para fins de aninhamento e demonstração,
        // podemos imaginar um loop simples, ou apenas uma instrução.
        // Se quisermos um loop aninhado aqui para cada 'L' simulado, podemos fazer:
        printf("  Esquerda\n"); // Imprime a direção

        printf("\n"); // Adiciona uma linha em branco para separar os movimentos 'L'
    }

    return 0; // Indica que o programa foi executado com sucesso
}