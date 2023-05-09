/*
10. Viết hàm xoá phần tử có giá trị lớn nhất trong mảng.
*/
#include <stdio.h>
#include <stdlib.h>
int xoaMax(int arr[]){
    int arr2[10];
    int max = arr[0];
    for(int i = 0; i < 10; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    int x = 0;
    for(int j = 0; j < 10; j++){
        if(arr[j] < max){
            arr2[x] = arr[j];
            x++;
        }
    }
    printf("\nMang sau khi xoa la: \n");
    for(int q = 0; q < x; q++){
        printf("Arr[%d] = %d\n", q, arr2[q]);
    }

}
int main()
{
    int arr[10];
    printf("Nhap gia tri cua mang: \n");
    for(int i = 0; i < 10; i++){
        printf("Arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    xoaMax(arr);
    return 0;
}
