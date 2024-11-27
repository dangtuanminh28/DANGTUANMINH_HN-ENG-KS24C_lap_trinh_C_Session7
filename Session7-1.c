#include <stdio.h>
int main() {
// Khai bao va gan gia tri cho mang
   int numbers[] = {1, 2, 3, 4, 5};
// Tinh do dai mang
	int lenght_numbers = sizeof(numbers) / sizeof(numbers[0]); 
// In tung phan tu trong mang
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < lenght_numbers; i++) {
        printf("Phan tu thu %d: %d\n", i, numbers[i]);
    }
// In do dai cua mang
    printf("Do dai cua mang la: %d\n", lenght_numbers);
    return 0;
}

