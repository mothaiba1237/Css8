#include <stdio.h>

int main() {
    int n = 3, sum = 0;
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    printf("ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("cac phan tu tren duong cheo phu:\n");
    for (int i = 0; i < n; i++) {
        sum += matrix[i][n - 1 - i];
        printf("%d ", matrix[i][n - 1 - i]);
    }
    printf("\ntong cac phan tu tren duong cheo phu là: %d", sum);

    return 0;
}

