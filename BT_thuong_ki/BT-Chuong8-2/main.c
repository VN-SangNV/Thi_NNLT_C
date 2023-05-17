/*
Viết chương trình tính tổng các giá trị phần tử trong mảng bởi sử dụng con trỏ
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, arr[100];
    printf("Nhap so phan tu mang: ");
    scanf("%d", &n);
    printf("Nhap gia tri mang: \n");

    for(int i = 0; i < n; i++){
        printf("Arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for(int j = 0; j < n; j++){
        int *ptr = &arr[j];
        sum += *ptr;
    }

    printf("Tong cac phan tu co trong mang la: %d", sum);
    return 0;
}
