/*
13. Viết chương trình đổi chữ xen kẻ 1 chữ hoa và 1 chữ thường.
*/
#include <stdio.h>
#include <stdlib.h>
void xenKe(char str[]){
    for(int i = 0; i < strlen(str); i++){
        if(i % 2 == 0){
            str[i] = toupper(str[i]);
        }
        else{
            str[i] = tolower(str[i]);
        }
    }
    printf("Chuoi xen ke la: %s", str);
}
int main()
{
    char str[100];
    printf("Nhap chuoi ki tu: ");
    gets(str);
    xenKe(str);
    return 0;
}
