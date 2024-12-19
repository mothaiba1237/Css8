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
    printf("cac phan tu tren duong cheo chinh:\n");
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
        printf("%d ", matrix[i][i]);
    }
    printf("\ntong cac phan tu tren duong cheo chinh la: %d", sum);

    return 0;
}

