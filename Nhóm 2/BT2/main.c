/*
2. Viết hàm tra xem trong chuỗi có ký tự số hay không nếu có tách ra thành một mảng số riêng.
*/
#include <stdio.h>
#include <stdlib.h>

void tachSo(char str[]){
    int len = strlen(str);
    int dem = 0;
    int strNumber[100];
    for(int i = 0; i < len; i++){
        if(str[i] > 47 && str[i] < 58){
            strNumber[dem] = str[i] - '0';
            dem++;
        }
    }
    if(dem > 0){
        printf("Cac so co trong mang da nhap la: \n");
        for(int j = 0; j < dem; j++){
            printf("%d\n", strNumber[j]);
        }
    }
    else{
        printf("Trong chuoi khong chua ki su so!");
    }
}
int main()
{
    char str[100];
    printf("Nhap chuoi ki tu: ");
    gets(str);
    tachSo(str);

    return 0;
}
