#include<stdio.h>
int main(){
// khai bao bien
    int x, y;
// nhap gia tri tu nguoi dung    
    while (1) {
        printf("Nhap vao so hang: ");
        scanf("%d", &x);
        printf("Nhap vao so cot: ");
        scanf("%d", &y);
// xu ly thong tin
        if (x > 0 && y > 0) {
            break;
        } else {
            printf("So hang va so cot phai lon hon 0\n");
        }
    }
    int munbers[x][y];
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("Hay nhap vao gia tri o hang %d, cot %d: ", i + 1, j + 1);
            scanf("%d", &munbers[i][j]);
        }
    }
    printf("Cac phan tu tren duong bien cua ma tran la:\n");
    for (int j = 0; j < y; j++) {
        printf("%d ", munbers[0][j]);
    }
    for (int i = 1; i < x; i++) {
        printf("%d ", munbers[i][y - 1]);
    }
    if (x > 1) {
        for (int j = y - 2; j >= 0; j--) {
            printf("%d ", munbers[x - 1][j]);
        }
    }
    if (y > 1) {
        for (int i = x - 2; i > 0; i--) {
            printf("%d ", munbers[i][0]);
        }
    }

    return 0;
}

