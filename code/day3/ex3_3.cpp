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
void SapXepTangDan(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void XoaPhanTu(int a[], int &n, int vt)
{
    for (int i = vt; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}
void XoaPhanTuChanDauTien(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            XoaPhanTu(a, n, i);
            return;
        }
    }
}
void main()
{
    int a[100];
    int n;
    NhapN(n);
    NhapMang(a, n);
    XuatMang(a, n);
    SapXepTangDan(a, n);
    printf("Mang sau khi sap xep tang dan: ");
    XuatMang(a, n);
    XoaPhanTuChanDauTien(a, n);
    printf("Mang sau khi xoa phan tu chan dau tien: ");
    XuatMang(a, n);
}