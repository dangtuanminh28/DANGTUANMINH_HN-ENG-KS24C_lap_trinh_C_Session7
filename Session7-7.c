#include <stdio.h>
int main() {
// khai bao ?han tu mang 
    int i, n, num;
// gan gia tri tu nguoi nhap vao
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
// khai bao mang co n phan tu
    int arr[n]; 
// kiem tra tat ca la so le
    printf("Nhap cac phan tu cua mang (chi nhap so le):\n");
    for (i = 0; i < n; i++) {
        while (1) { // Lap cho den khi nhap dung so le
            printf("Phan tu thu %d: ", i + 1);
            scanf("%d", &num);
            if (num % 2 != 0) { // Kiem tra so le
                arr[i] = num;  // gan gia tri vao mang neu la so le
                break;
            } else {
                printf("Phan tu phai la so le. Vui long nhap lai!\n");
            }
        }
    }
// In ra ket qua
    printf("Mang vua nhap: [");
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
    return 0;
}

