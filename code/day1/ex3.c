#include <stdio.h>

void Input(int arr[], int n);
void Output(int arr[], int n);
int CountElement(int arr[], int n, int x);
void NegativeValue(int arr[], int n);
int MinValue(int arr[], int n);

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    Input(arr, n);
    Output(arr, n);
    NegativeValue(arr, n);
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Count element has value %d in array: %d \n", x, CountElement(arr, n, x));
    printf("Minium value in array: %d \n", MinValue(arr, n));
    return 0;
}
void Input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
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
void NegativeValue(int arr[], int n)
{
    printf("Negative value in array: ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
int CountElement(int arr[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    return count;
}
int MinValue(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}