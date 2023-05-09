/*
4. Viết chương trình nhập số nguyên dương n gồm k chữ số (0 < k ≤ 5),
    đếm xem n có bao nhiêu chữ số là số nguyên tố.
*/
#include <stdio.h>
#include <stdlib.h>
int soNguyenTo(int n){
    int n1 = n;
    int dem = 0;
    int n2, dem2;

    do{
        n2 = n1%10;
        for(int i = 2; i < n2; i++){
            if(n2%i == 0){
                dem2 = 1;
                break;
            }
        }
        if(n2 > 1 && dem2 == 0){
            dem++;
        }
        dem2 = 0;
        n1 /= 10;
    }while(n1 > 0);
    printf("\n%d co %d so nguyen to!", n, dem);
}
int main()
{
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    soNguyenTo(n);
    return 0;
}
