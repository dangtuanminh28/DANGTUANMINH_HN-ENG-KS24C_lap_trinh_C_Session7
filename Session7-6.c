#include <stdio.h>
int main() {
// Khai bao va gan gia tri cho mang
    int arr[5] = {1, 2, 3, 4, 5}; 
    int i;
// In mang ban dau
    printf("Mang ban dau: [");
    for (i = 0; i < 5; i++) {
        printf("%d", arr[i]);
        if (i < 4) printf(", ");
    }
    printf("]\n");
// Thay doi mang
    for (i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) { // Neu la so chan
            arr[i] += 3;
        } else { // Neu la so le
            arr[i] += 2;
        }
    }
// In mang sau khi thay doi
    printf("Mang sau khi thay doi: [");
    for (i = 0; i < 5; i++) {
        printf("%d", arr[i]);
        if (i < 4) printf(", ");
    }
    printf("]\n");
   return 0;
}

