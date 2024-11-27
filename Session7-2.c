#include <stdio.h>
int main() {
// khai bao phan tu
    int arr[5];
// nhap gia tri 5 phan tu tu nguoi dung
    printf("nhap gia tri co 5 phan tu: \n");
    for(int i = 0; i < 5; i++) {
    	printf("nhap gia tri phan tu thu %d: ", i + 1);
    	scanf("%d", &arr[i]);
		}
// in ra ket qua 
    printf("Cac phan tu trong mang la: \n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
	return 0;
	}
