#include <stdio.h>

int main(int argc, char *argv[]){
    int r, c;
    printf("Enter rows and cols of matrix: ");
    scanf("%d", &r);
    scanf("%d", &c);
    int matrix[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("Enter a%d%d: ", i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    int t_matrix[c][r];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            t_matrix[j][i] = matrix[i][j];
        }
    }
    printf("Transpose of matrix:\n");
    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            printf("%d\t", t_matrix[i][j]);
        }
        printf("\n");
    }
}