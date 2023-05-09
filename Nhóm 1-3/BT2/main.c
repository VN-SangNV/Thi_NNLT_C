/*
2. (*) Viết chương trình nhập số nguyên dương n gồm 5 chữ số, kiểm tra xem các chữ số n có phải là số đối xứng hay không.
Ví dụ: 	Đối xứng: 13531
 		Không đối xứng: 13921

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int test(int n){
    int n1, n2;
    int n3 = n;
    int index = 10000;
    int dem = 0;
    for(int i = 0; i < 2; i++){
        n1 = n/index;
        n2 = n%10;
        if(n1 == n2){
            dem++;
            n -= n1*index;
            n = n/10;
            index /= 100;
        }
    }

    if(dem == 2){
        printf("\n\t%d doi xung!\n", n3);
    }
    else {
        printf("\n\t%d khong doi xung!\n", n3);
    }
    return 1;
}
int main()
{
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    test(n);

    return 0;
}
