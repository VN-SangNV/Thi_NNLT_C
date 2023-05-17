/*
Nhập 1 chuỗi bất kì, liệt kê xem mỗi ký tự xuất hiện mấy lần.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void max(char str[]){
    int dem[26];
    for(int j = 0; j < 26; j++){
        dem[j] = 0;
    }
    for(int i = 0; i < strlen(str); i++){
        if(str[i] != 32){
         //   printf("Ky tu %c la: %d\n", str[i], str[i]);
            dem[str[i]-97]++;
        }
    }

    printf("So lan xuat hien cac ki tu: \n");
    for(int k = 0; k < 26; k++){
        if(dem[k] > 0){
            printf("%c: %d\n", k+97, dem[k]);
        }
    }
}
int main()
{
    char str[100];
    printf("Nhap chuoi ki tu: ");
    gets(str);
    for(int i = 0; i < strlen(str); i++){
        str[i] = tolower(str[i]);
    }
    max(str);
    return 0;
}
