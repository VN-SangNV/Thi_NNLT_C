/*
1. Viết chương trình nhập 2 số a, b sao cho:
số lớn nhất trong 2 số phải là một số dương và chia hết cho 7.
    Nếu nhập sai phải yêu cầu nhập lại cho đến khi đúng
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, max;
    do{
        printf("Nhap 2 so a va b: ");
        scanf("%d%d", &a, &b);

        max = (a > b)?a:b;
        if((max > 0) && ((max%7)==0)){
            printf("\nSo da nhap  hop le! Ket thuc chuong trinh!\n");
        }
        else {
            printf("\nSo da nhap khong hop le! Vui long nhap lai!\n");
        }

    }while(max < 0 || (max%7)!=0);
    return 0;
}
