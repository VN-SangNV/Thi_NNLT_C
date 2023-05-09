/*
7. Viết hàm đếm các phần tử nhỏ hơn x trong mảng.
*/
#include <stdio.h>
#include <stdlib.h>

int demNhoHon(int arr[], int x){
    int dem = 0;
    for(int i = 0; i < 10; i++){
        if(arr[i] < x){
            dem++;
        }
    }
    printf("\nSo phan tu nho hon X trong mang la: %d\n", dem);
}
int main()
{
    int arr[10], x;
    printf("Nhap cac phan tu trong mang: \n");
    for(int i = 0; i < 10; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap X: ");
    scanf("%d", &x);
    demNhoHon(arr, x);
    return 0;
}
