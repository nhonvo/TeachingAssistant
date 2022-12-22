#include<stdio.h>

struct NhanVien
{
    int id;
    char fullname[30];
    char phone[10];
    int year;
};
void NhapNhanVien(NhanVien &nv)
{
    printf("Nhap ma nhan vien: ");
    scanf("%d", &nv.id);
    printf("Nhap ho ten: ");
    scanf("%s", nv.fullname);
    printf("Nhap so dien thoai: ");
    scanf("%s", nv.phone);
    printf("Nhap nam vao lam: ");
    scanf("%d", &nv.year);
}
void XuatNhanVien(NhanVien nv)
{
    printf("id: %d - fullname: %s - phone: %s - year: %d \n", nv.id, nv.fullname, nv.phone, nv.year); 
}
int main()
{
    NhanVien nv;
    NhapNhanVien(nv);
    XuatNhanVien(nv);
    return 0;
}

