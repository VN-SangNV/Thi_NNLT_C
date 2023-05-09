/*
12. Viết chương trình tách 1 mảng các số nguyên thành 2 mảng a và b,
sao cho mảng a chứa toàn số lẻ và mảng b chứa toàn số chẵn
*/
#include <stdio.h>
#include <stdlib.h>

int tachSo(int arr[]){
    int soChan[10], soLe[10];
    int demChan = 0;
    int demLe = 0;
    for(int i = 0; i < 10; i++){
        if(arr[i]%2 == 0){
            soChan[demChan] = arr[i];
            demChan++;
        }
        else {
            soLe[demLe] = arr[i];
            demLe++;
        }
    }
    printf("So chan trong chuoi la: ");
    for(int j = 0; j < demChan; j++){
        printf("%d ", soChan[j]);
    }
    printf("\nSo le trong chuoi la: ");
    for(int k = 0; k < demLe; k++){
        printf("%d ", soLe[k]);
    }
}
int main()
{
    int arr[10];
    printf("Nhap mang so nguyen: \n");
    for(int i = 0; i < 10; i++){
        printf("Arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    tachSo(arr);
    return 0;
}
