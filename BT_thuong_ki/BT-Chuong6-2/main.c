/*
42. Viết hàm tính tổng các phần tử là số hoàn thiện trong mảng các số nguyên
*/
#include <stdio.h>
#include <stdlib.h>
int sumHoanThien(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        int check = 1;
        for(int j = 2; j < arr[i]; j++){
            if(arr[i]%j == 0){
                check += j;
            }
        }
        if(check == arr[i]){
            sum += arr[i];
        }
    }
    return sum;
}
int main()
{
    int arr[100], n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Tong cac phan tu so hoan thien la: %d", sumHoanThien(arr, n));
    return 0;
}
