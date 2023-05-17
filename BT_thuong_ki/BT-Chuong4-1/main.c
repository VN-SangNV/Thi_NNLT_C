/*
Viết chương trình nhập số nguyên dương n gồm k chữ số (0<= k <=5),
tính giá trị trung bình của các chữ số chẵn trong k.
*/
#include <stdio.h>
#include <stdlib.h>

float average(int n){
    int dem = 0;
    int sum = 0;

    do{
        int n2 = n%10;
        if(n2%2 == 0){
            sum += n2;
            dem++;
        }
        n /= 10;
    }while(n > 10);

    float avg = 1.0*sum/dem;
    return avg;
}
int main()
{
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    float avg = average(n);
    printf("Trung binh cua cac chu so chan trong n la: %f", avg);
    return 0;
}
