#include <stdio.h>
int main() {
// Khai bao mang 5 phan tu
    int arr[5]; 
    int i, max, min;
// Nhap gia tri cho mang
    printf("Nhap 5 so nguyen:\n");
    for (i = 0; i < 5; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
// Gan gia tri ban dau cho max va min
    max = arr[0];
    min = arr[0];
// Duyet mang de tim max va min
    for (i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
// In ket qua
    printf("Phan tu lon nhat: %d\n", max);
    printf("Phan tu nho nhat: %d\n", min);
    return 0;
}

