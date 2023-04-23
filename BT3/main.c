/*
3. Viết chương trình nhập số nguyên dương n gồm k chữ số (0 < k ≤ 5),
    đếm xem n có bao nhiêu chữ số chẵn và bao nhiêu chữ số lẻ.
*/
#include <stdio.h>
#include <stdlib.h>
int dem(int n){
    int demChan = 0;
    int demLe = 0;
    int n1, n2;
    n1 = n;

    do{
        n2 = n1%10;
        if(n2%2 == 0){
            demChan++;
        }
        else{
            demLe++;
        }
        n1 /= 10;
    }while(n1 > 0);
    printf("\n%d co: \n%d so chu so chan\n%d chu so le\n", n, demChan, demLe);
}
int main()
{
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    dem(n);
    return 0;
}
