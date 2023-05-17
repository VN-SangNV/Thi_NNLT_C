/*
23. Đổi các từ ở đầu câu sang chữ hoa và những từ không phải đầu câu sang chữ thường
Ví dụ: nGuYen vAN a đổi thành: Nguyen Van A
*/
#include <stdio.h>
#include <stdlib.h>

void vietHoa(char str[]){
    int len = strlen(str);
    str[0] = toupper(str[0]);

    for(int i = 1; i < len; i++){
        if(str[i-1] == 32){
            str[i] = toupper(str[i]);
        }
        else{
            str[i] = tolower(str[i]);
        }
    }
    printf("Chuoi sau khi chinh sua la: %s", str);
}
int main()
{
    char str[100];
    printf("Nhap chuoi ki tu: ");
    gets(str);

    vietHoa(str);

    return 0;
}
