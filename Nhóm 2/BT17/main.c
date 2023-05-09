/*
17. Viết chương trình tìm kiếm xem ký tự nào xuất nhiện nhiều nhất trong chuỗi.
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
            printf("Ky tu %c la: %d\n", str[i], str[i]);
            dem[str[i]-97]++;
        }
    }
    int max = dem[0];
    int kyTu = 0;
    for(int k = 1; k<26; k++){
        if(dem[k] > max){
            max = dem[k];
            kyTu = k;
        }
    }
    printf("Ky tu xuat hien nhieu nhat la: %c", kyTu+97);
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
