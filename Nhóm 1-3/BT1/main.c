/*
1. Viết chương trình tính tiền lương ngày cho công nhân, cho biết trước giờ vào ca, giờ ra ca của mỗi người.
Giả sử rằng:
-	Tiền trả cho mỗi giờ trước 12 giờ là 6000đ và sau 12 giờ là 7500đ.
-	Giờ vào ca sớm nhất là 6 giờ sáng và giờ ra ca trễ nhất là 18 giờ (Giả sử giờ nhập vào nguyên).
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int clockIn, clockOut, salary;
    printf("Nhap gio vao ca: ");
    scanf("%d", &clockIn);
    printf("Nhap gio ra ca: ");
    scanf("%d", &clockOut);

    if(clockIn < 6 || clockOut > 18){
        printf("\n\tGio lam khong hop le!\n");
    }
    else {
        if(clockOut <= 12){
            salary = (clockOut - clockIn)*6000;
        }
        else{
                if(clockIn <= 12){
                    salary = 6*6000 + (clockOut - 12)*7500;
                }
                else{
                    salary = (clockOut - clockIn)*7500;
                }
        }
        printf("\nTong tien luong trong ngay la: %d\n", salary);
    }
    return 0;
}
