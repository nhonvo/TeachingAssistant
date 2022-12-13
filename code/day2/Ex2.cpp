
#include <stdio.h>

void Nhap(int &n, float &x)
{
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%f", &x);
}
void Tong(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += i;
    }
    printf("Tong cac so tu 1 den %d la: %d", n, s);
    printf("\n");
}
void Tich(int n)
{
    int t = 1;
    for (int i = 1; i <= n; i++)
    {
        t *= i;
    }
    printf("Tich cac so tu 1 den %d la: %d", n, t);
    printf("\n");
}

void TongPhanSo(int n)
{
    float s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += (i / (i + 1.0));
    }
    printf("Tong cac phan so tu 1 den %d la: %0.2f", n, s);
    printf("\n");
}
void BinhPhuong(int n, float x)
{
    float s = 1;
    while (n--)
    {
        s = s * x;
    }

    printf("Binh phuong cua x^n la: %0.2f", s);
    printf("\n");
}
int main()
{
    int n;
    float x;
    Nhap(n, x);
    Tong(n);
    Tich(n);
    TongPhanSo(n);
    BinhPhuong(n, x);
    return 0;
}