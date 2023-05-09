/*
8. Viết hàm tính tổng các phần tử nằm ở vị trí chẵn trong mảng các số nguyên
*/
#include <stdio.h>
#include <stdlib.h>
int sum(int arr[]){
    int sum = 0;
    for(int i = 0; i<10; i++){
        if(i%2 == 0){
            sum += arr[i];
        }
    }
    printf("Tong cac phan tu nam o vi tri chan trong mang la: %d", sum);
}
int main()
{
    int arr[10];
    printf("Nhap cac phan tu trong mang: \n");
    for(int i = 0; i < 10; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    sum(arr);
    return 0;
}
