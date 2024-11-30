#include <stdio.h>
int main(){
	// khai bao mang
	int rows, colums;
	// nguoi dung nhap so hang va cot trong mang 2 chieu
	do{
		printf("xin hay nhap so hang: ");
		scanf("%d", &rows);
		printf("xin hay nhap so cot: ");
		scanf("%d", &colums);
	}while(rows < 0 || colums < 0);
	 int arr[rows][colums];

    // Nhap tung phan tu vao mang
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colums; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // In mang ra man hinh theo dang ma tran
    printf("\nMang 2 chieu la:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colums; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
	
	return 0;
}
