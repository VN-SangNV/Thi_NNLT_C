/*
9. Viết hàm sắp xếp mảng theo thứ tự giảm dần.
*/
#include <stdio.h>
#include <stdlib.h>

int sapXep(int arr[]){
    int t;
    for(int i = 0; i < 10; i++){
        for(int j = i+1; j < 10; j++){
            if(arr[i] < arr[j]){ //nếu là bài toán tăng dần thì đổi dấu so sánh là được
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    printf("\nMang sau khi sap xep la: \n");
    for(int x = 0; x < 10; x++){
        printf("Arr[%d] = %d\n", x, arr[x]);
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
    sapXep(arr);
    return 0;
}
