#include <stdio.h>
// ******
// ******
// ******
// ******
// ******
// ******

// *
// **
// ***
// ****
// *****
// ******

// *****
// ****
// ***
// **
// *
void VeHinhChuNhat(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void VeTamGiac(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void VeTamGiacNguoc(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n, m;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap m: ");
    scanf("%d", &m);
    VeHinhChuNhat(n, m);
    VeTamGiac(n);
    VeTamGiacNguoc(n);
    return 0;
}