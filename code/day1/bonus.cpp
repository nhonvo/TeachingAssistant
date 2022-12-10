#include <iostream>
#include <cmath>

using namespace std;

void Insert(int a[], int &n, int x, int k)
{
    for (int i = n; i > k; i--)
    {
        a[i] = a[i - 1];
    }
    a[k + 1] = x;
    n++;
}
void Delete(int a[], int &n, int k)
{
    for (int i = k; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}
// 1 2 3 4
// 1 2 4
bool CheckPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void DeletePrime(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        if (CheckPrime(a[i]))
        {
            Delete(a, n, i);
            i--;
        }
    }
}
void Output(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int Min(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[10] = {1, 2, 3, 13, 5, 6, 7, 8, 9, 10};
    int n = 10;
    Output(a, n);
    // DeletePrime(a, n);
    int min = Min(a, n);
    Insert(a, n, 100, min);
    Output(a, n);
}