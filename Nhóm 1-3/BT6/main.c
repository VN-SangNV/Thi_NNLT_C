/*
6. Nhập vào X. Viết hàm in ra màn hình những phần tử có giá trị từ 1 đến X có trong mảng.
*/
#include <stdio.h>
#include <stdlib.h>
int in(int arr[], int x){
    for(int i = 0; i < 10; i++){
        if(arr[i] >= 1 && arr[i] <= x){
            printf("arr[%d] = %d\n", i, arr[i]);
        }
    }
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
    printf("\nCac so co gia tri tu 1 toi X trong mang la: \n");
    in(arr, x);
    return 0;
}
