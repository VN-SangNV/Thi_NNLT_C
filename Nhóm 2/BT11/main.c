/*
11. Viết hàm chèn phần tử có giá trị X vào phía sau tất cả các phần tử có giá trị chẵn trong mảng.
*/
#include <stdio.h>
#include <stdlib.h>

void addX(int arr[], int x){
    int arr2[20];
    int dem = 0;
    for(int i = 0; i < 10; i++){
        arr2[dem] = arr[i];
        dem++;
        if(arr[i]%2 == 0){
            arr2[dem] = x;
            dem++;
        }
    }
    printf("Mang sau khi chen la: \n");
    for(int j = 0; j < dem; j++){
        printf("Arr[%d] = %d\n", j, arr2[j]);
    }
}
int main()
{
    int arr[10], x;
    printf("Nhap mang: \n");
    for(int i = 0; i < 10; i++){
        printf("Arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap x: ");
    scanf("%d", &x);

    addX(arr, x);
    return 0;
}
