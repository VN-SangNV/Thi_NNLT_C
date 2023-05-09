/*
4. Viết chương trình nhập vào một chuỗi, hãy loại bỏ những khoảng trắng thừa trong chuỗi.
*/
#include <stdio.h>
#include <stdlib.h>
void xoa(char str[]){
    char str2[100];
    int dem = 0;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == 32){
            if(str[i-1] == 32){
                continue;
            }
            else {
                str2[dem] = str[i];
                dem++;
            }
        }
        else {
            str2[dem] = str[i];
            dem++;
        }
    }
    printf("\nChuoi da xoa cac ky tu thua: %s\n", str2);
}
int main()
{
    char str[100];
    printf("Nhap chuoi: ");
    gets(str);
    xoa(str);

    return 0;
}
