#include<stdio.h>
#include<string.h>


void NhapChuoi(char s[])
{
    printf("Nhap chuoi: ");
    scanf("%s", s);
}
void XuatChuoi(char s[])
{
    printf("Chuoi vua nhap: %s \n", s);
}
int DemKiTuA(char s[])
{
    int dem = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a')
        {
            dem++;
        }
    }
    return dem;
}
void CatKhoangTrang(char s[])
{
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ')
        {
            for (int j = i; j < n; j++)
            {
                s[j] = s[j + 1];
            }
            n--;
            i--;
        }
    }
}
int DemTu(char s[])
{
    int dem = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
        {
            dem++;
        }
    }
    return dem + 1;
}
void SapXepTangDan(char s[])
{
    for (int i = 0; i < strlen(s) - 1; i++)
    {
        for (int j = i + 1; j < strlen(s); j++)
        {
            if (s[i] > s[j])
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}
int main()
{
    char s[100];
    NhapChuoi(s);
    XuatChuoi(s);
    printf("So ki tu 'a' trong chuoi: %d \n", DemKiTuA(s));
    CatKhoangTrang(s);
    printf("Chuoi sau khi cat khoang trang: %s \n", s);
    printf("So tu trong chuoi: %d \n", DemTu(s));
    SapXepTangDan(s);
    printf("Chuoi sau khi sap xep tang dan: %s \n", s);
    return 0;
}
