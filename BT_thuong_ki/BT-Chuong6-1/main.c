/*
39. Viết hàm tính tổng các phần tử cực đại trong mảng các số nguyên
(phần tử cực đại là phần tử lớn hơn các phần tử xung quanh nó).
 Ví dụ : 1 5 2 6 3 5 1 8 6
 =>phần tử cực đại: 5 6 5 8
*/
#include <stdio.h>
#include <stdlib.h>
int sumMax(int arr[], int n){
    int sum;
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
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

    printf("Tong cac phan tu cuc dai la: %d", sumMax(arr, n));
    return 0;
}
