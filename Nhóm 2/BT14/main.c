/*
14. Nhập một chuỗi bất kì, yêu cầu nhập 1 ký tự muốn xóa.
Thực hiện xóa tất cả những ký tự đó trong chuỗi
*/
#include <stdio.h>
#include <stdlib.h>
void xoaHet(char str[], char x){
    char str2[100];
    int dem = 0;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == x){
            continue;
        }
        else {
            str2[dem] = str[i];
            dem++;
        }
    }
    printf("\nChuoi da xoa: %s\n", str2);
}
int main()
{
    char str[100];
    printf("Nhap chuoi ki tu: ");
    gets(str);

    char x;
    printf("Nhap ki tu muon xoa: ");
    scanf("%c", &x);

    xoaHet(str, x);
    return 0;
}
