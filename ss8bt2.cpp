#include <stdio.h>

int main() {
    int arr[] = {3, 5, 7, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x, a = 0;

    printf("nhap phan tu can tim: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("vi tri phan tu trong mang là %d\n", i);
            a = 1;
            break;
        }
    }
    if (!a) {
        printf("phan tu khong ton tai trong mang\n");
    }

    return 0;
}

