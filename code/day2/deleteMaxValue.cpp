#include <stdio.h>

void deleteElement(int a[], int &n, int k)
{
    for (int i = k; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}
int MaxElement(int a[], int n)
{
    int max = a[0], index = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            index = i;
        }
    }
    return index;
}
int main()
{
    int a[4] = {1, 2, 3, 4};
    int n = 4, index;
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    //     scanf("%d", &a[i]);
    index = MaxElement(a, n);
    deleteElement(a, n, index);

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}