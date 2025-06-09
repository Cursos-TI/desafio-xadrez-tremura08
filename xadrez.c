#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

// --- Funções Recursivas para Movimento das Peças ---

// Função recursiva para o movimento da Torre (5 casas para a direita)
void moverTorre(int passosRestantes) {
    if (passosRestantes > 0) {
        printf("Direita\n");
        moverTorre(passosRestantes - 1); // Chama a si mesma para o próximo passo
    }
}

// Função recursiva para o movimento do Bispo (5 casas na diagonal para cima e à direita)
// Dentro de cada passo recursivo, usaremos loops aninhados para simular a diagonal.
void moverBispo(int passosRestantes) {
    if (passosRestantes > 0) {
        printf("Passo diagonal do Bispo %d:\n", 6 - passosRestantes); // Indica qual passo diagonal é

        // Loop externo para o movimento vertical (Cima)
        // Apenas uma iteração para representar um "passo para cima" para esta diagonal.
        for (int vertical = 0; vertical < 1; vertical++) {
            printf("  Cima\n");

            // Loop interno para o movimento horizontal (Direita)
            // Apenas uma iteração para representar um "passo para a direita" para esta diagonal.
            for (int horizontal = 0; horizontal < 1; horizontal++) {
                printf("  Direita\n");
            }
        }
        moverBispo(passosRestantes - 1); // Chama a si mesma para o próximo passo diagonal
    }
}

// Função recursiva para o movimento da Rainha (8 casas para a esquerda)
void moverRainha(int passosRestantes) {
    if (passosRestantes > 0) {
        printf("Esquerda\n");
        moverRainha(passosRestantes - 1); // Chama a si mesma para o próximo passo
    }
}

int main() {
    // --- Movimento da Torre (usando função recursiva) ---
    printf("--- Movimento da Torre ---\n");
    moverTorre(5); // Inicia o movimento da Torre com 5 passos
    printf("\n");

    // --- Movimento do Bispo (usando função recursiva com loops aninhados) ---
    printf("--- Movimento do Bispo ---\n");
    moverBispo(5); // Inicia o movimento do Bispo com 5 passos
    printf("\n");

    // --- Movimento da Rainha (usando função recursiva) ---
    printf("--- Movimento da Rainha ---\n");
    moverRainha(8); // Inicia o movimento da Rainha com 8 passos
    printf("\n");

    // --- Movimento do Cavalo (usando loops aninhados com múltiplas variáveis/condições, continue e break) ---
    // O Cavalo se move em 'L' (1 vez em L para cima à direita).
    // Para simplificar a visualização, vamos simular o "L" como:
    // 1. Duas casas para cima
    // 2. Uma casa para a direita
    printf("--- Movimento do Cavalo ---\n");

    int movimentosL = 1; // Queremos simular apenas um movimento 'L' completo
    for (int l_count = 0; l_count < movimentosL; l_count++) {
        printf("Movimento L %d:\n", l_count + 1);

        // Primeira parte do 'L': 2 casas para cima
        int casasVerticais = 0;
        int maxCasasVerticais = 2; // Queremos mover 2 casas para cima
        while (casasVerticais < maxCasasVerticais && maxCasasVerticais > 0) {
            printf("  Cima\n");
            casasVerticais++;
            if (casasVerticais == 1) {
                printf("  (Metade do movimento vertical)\n"); // Exemplo de continue
                continue; // Continua para a próxima iteração do while
            }
        }

        // Segunda parte do 'L': 1 casa para a direita
        int casasHorizontais = 0;
        for (; casasHorizontais < 1; casasHorizontais++) { // Loop for com inicialização omitida
            printf("  Direita\n");
            if (casasHorizontais == 0) {
                printf("  (Movimento horizontal)\n");
                break; // Sai do loop for após o primeiro movimento horizontal
            }
        }
        printf("\n");
    }

    return 0; // Indica que o programa foi executado com sucesso
}