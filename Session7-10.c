#include<stdio.h>
int main() {
// khai bao bien
    int n = 0;
// nhap so phan tu do nguoi dung
    do {
        printf("Nhap vao kich thuoc mang (dieu kien phai lon hon 0): ");
        scanf("%d", &n);
    } while (n < 1); 
    int numbers[n]; 
    for (int i = 0; i < n; i++) {
        printf("Nhap vao phan tu thu %d trong mang: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("Cac so nguyen tu trong mang la: ");
    for (int i = 0; i < n; i++) {
        int num = numbers[i];

        if (num > 1) 
        {  
            int isPrime = 1;  
            for (int j = 2; j < num; j++) 
            {
                if (num % j == 0) 
                {
                    isPrime = 0; 
                    break;
                }
            }

            if (isPrime) 
            {
            	// In ra ket qua
                printf("%d ", num); 
            }
        }
    }
    return 0;
}
