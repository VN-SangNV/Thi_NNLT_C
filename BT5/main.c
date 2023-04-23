/*
5. Viết hàm in vị trí các phần tử nguyên tố trong mảng các số nguyên.
*/
include <stdio.h>
#include <stdlib.h>
int inSoNguyenTo(int arr[]){
    int dem;
    for(int i = 0; i < 10; i++){
        for(int j = 2; j < arr[i]; j++){
            if(arr[i]%j == 0){
                dem = 1;
                break;
            }
        }
        if(dem == 0){
            printf("arr[%d] = %d\n", i, arr[i]);
        }
        dem = 0;
    }
}
int main()
{
    int arr[10];
    printf("Nhap cac phan tu trong mang: \n");
    for(int i = 0; i < 10; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nCac so nguyen to trong mang la: \n");
    inSoNguyenTo(arr);
    return 0;
}
