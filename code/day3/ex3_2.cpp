#include <stdio.h>

void NhapN(int &n)
{
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n < 0 || n > 100);
}
void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &a[i]);
    }
}
void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = %d ", i, a[i]);
    }
}
bool LaSoChinhPhuong(int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (i * i == n)
        {
            return true;
        }
    }
    return false;
}
void SoChinhPhuongCuoiCung(int a[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (LaSoChinhPhuong(a[i]))
        {
            printf("So chinh phuong cuoi cung la: %d", a[i]);
            return;
        }
    }
    printf("Khong co so chinh phuong");
}
void DaoNguocMang(int a[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}
int main()
{
    int a[100];
    int n;
    NhapN(n);
    NhapMang(a, n);
    XuatMang(a, n);
    SoChinhPhuongCuoiCung(a, n);
    DaoNguocMang(a, n);
    XuatMang(a, n);
    return 0;
}