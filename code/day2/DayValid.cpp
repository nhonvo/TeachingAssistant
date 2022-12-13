#include <stdio.h>

// F. Kiểm tra ngày tháng năm hợp lệ
// Mô tả yêu cầu
// Nhập vào ngày, tháng, năm. Kiểm tra ngày, tháng, năm đó có hợp lệ hay không.

// Dữ liệu vào
// 1 dòng chứa ngày, tháng, năm (cách nhau bằng một khoảng cách)

// Dữ liệu ra
// Nếu ngày, tháng, năm hợp lệ thì in "Valid"
// Nếu ngày, tháng, năm không hợp lệ thì in "None"

int main()
{

    int d, m, y;
    scanf("%d %d %d", &d, &m, &y);

    if (m < 1 || m > 12)
    {
        printf("None");
        return 0;
    }
    if (d < 1 || d > 31)
    {
        printf("None");
        return 0;
    }
    if (y < 1 || y > 9999)
    {
        printf("None");
        return 0;
    }
    if (m == 2)
    {
        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        {
            if (d > 29)
            {
                printf("None");
                return 0;
            }
        }
        else
        {
            if (d > 28)
            {
                printf("None");
                return 0;
            }
        }
    }
    if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        if (d > 30)
        {
            printf("None");
            return 0;
        }
    }
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        if (d > 31)
        {
            printf("None");
            return 0;
        }
    }
    printf("Valid");
}