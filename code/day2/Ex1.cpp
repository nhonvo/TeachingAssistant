// Viết chương trình nhập vào một số nguyên n > 0, hãy:

// Xuất ra các số trong phạm vi từ 1 đến n
// Xuất ra tổng các chữ số của n
// Xuất ra các số chẵn trong phạm vi từ 1 đến n
// Xuất ra các số lẻ không chia hết cho 3 trong phạm vi từ 1 đến n

// ---
// Số nguyên tố là số chỉ có 2 ước (1 và chính nó). Ví dụ ta có:

// Ước của 1 là: 1
// Ước của 2 là: 1 và 2
// Ước của 3 là: 1 và 3
// Ước của 4 là: 1, 2 và 4
// Nhận xét thấy 2, 3 chỉ có 2 ước, đó chính là số nguyên tố.

// Ta sẽ có dãy số nguyên tố: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73,...

// Bạn hãy kiểm tra xem 1 số nhập vào có phải là số nguyên tố không nhé?
// ----
// Số hoàn hảo là số có tổng các ước số bằng chính nó. Ví dụ 28 là số hoàn hảo (28 = 1+2+4+7+14).
// Cho một số nguyên n, hãy kiểm tra xem n có phải là số hoàn hảo hay không.

#include <stdio.h>

void Nhap(int &n)
{
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n <= 0);
}
void Xuat()
{
    printf("Cac so trong pham vi tu 1 den %d la: ", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
}
void Chan()
{
    printf("Cac so chan trong pham vi tu 1 den %d la: ", n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}
void Le()
{
    printf("Cac so le khong chia het cho 3 trong pham vi tu 1 den %d la: ", n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0 && i % 3 != 0)
        {
            printf("%d ", i);
        }
    }
}
void Tong()
{
    int s = 0;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    printf("Tong cac chu so cua n la: %d", s);
}
void KiemTraSoNguyenTo(int n){
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            dem++;
        }
    }
    if (dem == 2)
    {
        printf("n la so nguyen to");
    }
    else
    {
        printf("n khong phai la so nguyen to");
    }
}
void KiemtraSoHoanHao(int n){
    int s = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            s += i;
        }
    }
    if (s == n)
    {
        printf("n la so hoan hao");
    }
    else
    {
        printf("n khong phai la so hoan hao");
    }
}
int main()
{
    int n;
    Nhap(n);
    Xuat();
    Chan();
    Le();
}