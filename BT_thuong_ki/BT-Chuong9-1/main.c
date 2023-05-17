/*
Tổ chức dữ liệu để quản lí sinh viên bằng cấu trúc mẫu tin trong một mảng N phần tử, mỗi phần tử có cấu trúc như sau:
- Mã sinh viên.
- Tên.
- Năm sinh.
- Điểm toán, lý, hoá, điểm trung bình.
Viết chương trình thực hiện những công việc sau:
• Nhập danh sách các sinh viên cho một lớp học.
• Xuất danh sách sinh viên ra màn hình.
• Tìm sinh viên có điểm trung bình cao nhất.
• Sắp xếp danh sách lớp theo thứ tự tăng dần của điểm trung bình.
• Sắp xếp danh sách lớp theo thứ tự giảm dần của điểm toán.
• Tìm kiếm và in ra các sinh viên có điểm trung bình lớn hơn 5 và không có môn nào dưới 3.
• Tìm sinh viên có tuổi lớn nhất.
• Nhập vào tên của một sinh viên. Tìm và in ra các thông tin liên quan đến sinh viên đó (nếu có).
*/
#include <stdio.h>
#include <stdlib.h>
struct sinhVien{
    int MSSV;
    char ten[50];
    int namSinh;
    float diemToan;
    float diemHoa;
    float diemLy;
    float trungBinh;
//    float sum = diemHoa+diemLy+diemToan;

};
void nhapSinhVien(struct sinhVien &sv){
    printf("MSSV: ");
    scanf("%d", &sv.MSSV);
    printf("Ho va ten: ");
    scanf("%d", &sv.ten);
    printf("Nam sinh: ");
    scanf("%d", &sv.namSinh);
    printf("Diem toan: ");
    scanf("%f", &sv.diemToan);
    printf("Diem ly: ");
    scanf("%d", &sv.diemLy);
    printf("Diem hoa: ");
    scanf("%d", &sv.diemHoa);
}
void inDanhSach(struct sinhVien sv){
    printf("%s\n", sv.ten);
}
int main()
{
    sinhVien sv1;
    printf("Nhap thong tin sinh vien: \n");
    nhapSinhVien(sv1);
    inDanhSach(sv1);
    return 0;
}
