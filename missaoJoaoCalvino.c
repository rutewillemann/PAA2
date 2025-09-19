/* PROJETO 1 - Missão João Calvino
Disciplina: Projeto e Análise de Algoritmos II
Docente: Prof. Dr. Charles Boulhosa Rodamilans
Discentes:
            Fabyani Tiva Yan (RA: 10431835)
            Rute Willemann (RA: 10436781)
*/

#include <stdio.h>
#include <string.h>

#define MAX 100 // tamanho maximo do predio

// cuncao recursiva com backtracking
int busca(char edificio[][MAX], int visitado[][MAX], int n, int m, int linha, int coluna) {
    // verifica se está fora dos limites
    /*  
        linha < 0 -> está acima do predio
        linha >= numero de linhas -> está abaixo do ultimo andar
        coluna < 0 -> está antes da primeira coluna
        coluna >= numero de colunas -> está depois da ultima coluna
    */
    if (linha < 0 || linha >= n || coluna < 0 || coluna >= m) return 0; // caminho impossivel

    // se celula ja foi visitada (visitado[linha][coluna] = 1), nao continua
    if (visitado[linha][coluna]) return 0; 

    // se encontrou a chave
    if (edificio[linha][coluna] == '*') return 1; // caminho encontrado

    // marca a celula atual como visitada 
    visitado[linha][coluna] = 1;

    int achou = 0;
    if (edificio[linha][coluna] == 'H') { // horizontal (coluna)
        // esquerda
        achou = busca(edificio, visitado, n, m, linha, coluna - 1);
        // se nao achou,
        // direita
        if (!achou) achou = busca(edificio, visitado, n, m, linha, coluna + 1);
    
    } else if (edificio[linha][coluna] == 'V') { // vertical (linha)
        // cima
        achou = busca(edificio, visitado, n, m, linha - 1, coluna);
        // se nao achou,
        // baixo
        if (!achou) achou = busca(edificio, visitado, n, m, linha + 1, coluna);
    }

    // desmarca (backtracking)
    visitado[linha][coluna] = 0;

    return achou;
}

int main() {
    int n, inicioLinha, inicioColuna;
    char edificio[MAX][MAX];
    int visitado[MAX][MAX];

    // leitura da entrada
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", edificio[i]); // le a linha como string
    }

    scanf("%d %d", &inicioLinha, &inicioColuna);

    // numero de colunas = tamanho da primeira linha
    int m = strlen(edificio[0]);

    // inicializa matriz de visitados
    memset(visitado, 0, sizeof(visitado));

    // chama a busca
    if (busca(edificio, visitado, n, m, inicioLinha, inicioColuna)) {
        printf("Chave encontrada no Edifício João Calvino!\n");
    } else {
        printf("Não conseguimos encontrar a chave no Edifício João Calvino.\n");
    }

    return 0;
}
