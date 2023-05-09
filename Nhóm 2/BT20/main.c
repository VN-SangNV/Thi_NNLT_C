#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void hoanDoi(char str[]){
    int len = strlen(str);
    printf("strlen = %d\n", len);
    char strFirst[10];
    char strEnd[10];

    for(int i = 0; i < len; i++){
        if(str[i] == ' '){
            break;
        }
        else {
            strFirst[i] = str[i];
        }
    }
    printf("strFirst = %d\n", strFirst);
    int dem = len;
    for(int j = len ; j > 0; j--){
        if(str[j] == ' '){
            dem -= j;
            break;
        }
    }

    int dem2 = 0;
    for(int k = (len-dem); k < len; k++){
        strEnd[dem2] = str[k];
        dem2++;
    }
    printf("strEnd = %d\n", strEnd);

    int len1 = strlen(strFirst);
    int len2 = strlen(strEnd);
    char str2[100];

    for(int l = 0; l < len2; l++){
        str2[l] = strEnd[l];
    }
    for(int m = len1; m < (len - len2); m++){
        str2[len2] = str[m];
        len2++;
    }
    for(int n = 0; n < len1; n++){
        str2[len2] = str[n];
        len2++;
    }
    printf("\nChuoi sau khi trao doi la: %s", str2);
}
int main()
{
    char str[100];
    printf("Nhap chuoi ki tu: \n");
    gets(str);
    hoanDoi(str);
    return 0;
}
