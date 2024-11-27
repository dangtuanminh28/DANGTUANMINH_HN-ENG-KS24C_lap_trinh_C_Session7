#include <stdio.h>
int main() {
// khai bao bien 
    int n;
//nhap gia tri tu nguoi dung	
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
// Khai bao mang co kich thuoc n
    int arr[n];  
// Nhap tung phan tu cua mang
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
// In ra ket qua
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

