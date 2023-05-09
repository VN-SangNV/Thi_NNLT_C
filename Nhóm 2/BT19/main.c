/*
19. Viết chương trình đổi những ký tự đầu tiên của mỗi từ thành chữ in hoa.
*/
#include <stdio.h>
#include <stdlib.h>
void vietHoa(char str[]){
    str[0] = toupper(str[0]);
    for(int i = 0; i < strlen(str); i++){
        if(str[i-1] == 32){
            str[i] = toupper(str[i]);
        }
    }
    printf("Chuoi viet hoa la: %s", str);

}
int main()
{
    char str[100];
    printf("Nhap chuoi ki tu: ");
    gets(str);
    vietHoa(str);
    return 0;
}
