/*
23. Viết chương trình nhập số nguyên dương n gồm k chữ số,
sau đó nhập một số nguyên x, tìm vị trí xuất hiện của chữ số có giá trị x trong n.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void viTri(int n, int x){
    int n2 = n;
    int dem = 0;
    int dem2 = 0;
    do{
        n2 /=10;
        dem++;
    }while(n2 > 10);
    int dem3 = dem;
    printf("Vi tri: ");
    n2 = n;
    for(int i = 1; i < (dem3+2); i++){
        int n3 = n2/pow(10, dem);
        if(n3 == x){
            printf("%d, ", i);
            dem2++;
        }
        n2 -= n3*pow(10, dem);
        dem--;
    }
    if(dem2 == 0){
        printf("trong n khong chua x!");
    }
}
int main()
{
    int n, x;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%d", &x);

    viTri(n, x);
    return 0;
}
