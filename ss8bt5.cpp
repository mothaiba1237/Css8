#include <stdio.h>

int main() {
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int r = 3, c = 4, sum = 0;

    printf("ma tran:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i == 0 || i == r - 1 || j == 0 || j == c - 1)
                sum += a[i][j];
        }
    }
    printf("tong cac phan tu tren duong bien la: %d\n", sum);
    return 0;
}

