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
void GTLN(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("GTLN = %d", max);
}
bool LaNguyenTo(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void DemSoNguyenTo(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (LaNguyenTo(a[i]))
        {
            dem++;
        }
    }
    printf("Co %d so nguyen to", dem);
}

int main()
{
    int n;
    NhapN(n);
    int a[100];
    NhapMang(a, n);
    XuatMang(a, n);
    GTLN(a, n);
    DemSoNguyenTo(a, n);
    return 0;
}