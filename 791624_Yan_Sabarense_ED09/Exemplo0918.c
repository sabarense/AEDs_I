#include "io.h"

void readDoubleMatrix(int linhas, int colunas, double matriz[][colunas]){

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }
}

void printDoubleMatrix(int linhas, int colunas, double matriz[][colunas]){

    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("[%lf]", matriz[i][j]);
        }
        printf("\n");
    }
}    

void printDiagonalAcima(int linha, int coluna, double matriz[][coluna]){

    for (int i = 0; i < linha; i++){
        for (int j = 0; j < linha; j++){
            if(i == j){
                if(i + j >= coluna - 1){
                    printf("[%.2lf]\n", matriz[i][j]);
                }
            }
        }
        printf("\n");
    }
}

int main(){

    double matriz[10][10];
    int linhas, colunas;

    do{
        printf("Digite o numero de linhas da matriz: ");
        scanf("%d", &linhas);

        printf("Digite o numero de colunas da matriz: ");
        scanf("%d", &colunas);

        if (linhas <= 0 || colunas <= 0){
            printf("ERRO: dimensoes invalidas!\n");
        }
    }while(linhas <= 0 || colunas <= 0);

    readDoubleMatrix(linhas, colunas, matriz);
    printDoubleMatrix(linhas,colunas,matriz);
    printDiagonalAcima(linhas, colunas, matriz);

    return 0;
}
