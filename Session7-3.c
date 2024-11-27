#include <stdio.h>
int main() {
// Khai bao va gan gia tri cho mang
   int arr[5] = {1, 3, 4, 6, 9}; 
   int even_numbers = 0; 
// In cac phan tu chan trong mang
    printf("Cac phan tu la so chan trong mang: \n");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) { // Kiem tra so chan
            printf("%d ", arr[i]);
            even_numbers = 1; // Danh dau la mang co so chan
        }
    }
// Neu khong co so chan trong mang
    if (!even_numbers) {
        printf("Mang khong chua so chan \n");
    } 
// in ra ket qua
    printf("\n");
    return 0;
}

