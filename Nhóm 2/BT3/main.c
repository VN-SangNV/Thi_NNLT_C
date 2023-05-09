/*
3. Viết chương trình đảo ngược các ký tự trong chuỗi .
*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str[100], str2[100];
    printf("Nhap chuoi ki tu: ");
    gets(str);

    int len;
    len = strlen(str);
    int index = len - 1;
    for(int i = 0; i < len; i++){
        str2[i] = str[index];
        index--;
    }
    printf("Chuoi sau khi dao nguoc la: %s", str2);
    return 0;
}
