/*
Viết chương trình C cộng 2 số sử dụng con trỏ
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Nhap a, b: ");
    scanf("%d%d", &a, &b);

    int *ptr1 = &a;
    int *ptr2 = &b;
    printf("Tong 2 so la: %d", *ptr1 + *ptr2);

    return 0;
}
