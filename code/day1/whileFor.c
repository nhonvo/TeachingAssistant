#include <stdio.h>
#include <math.h>
void CommonMultiple()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
        i++;
    }
}
void GreatestCommonMultiple()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    int i = 1;
    while (i <= a && i <= b)
    {
        if (a % i == 0 && b % i == 0)
        {
            printf("%d ", i);
        }
        i++;
    }
}
// Check if a number is prime
bool IsPrime(int n)
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
// Print all prime numbers from 1 to n
void PrimeNumber()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        if (IsPrime(i))
        {
            printf("%d ", i);
        }
    }
}
// check if a number is opposite 
bool isOpposite(int n)
{
    int temp = n;
    int sum = 0;
    while (temp != 0)
    {
        int digit = temp % 10;
        sum = sum * 10 + digit;
        temp /= 10;
    }
    if (sum == n)
    {
        return true;
    }
    return false;
}
int main(int argc, char const *argv[])
{
    // CommonMultiple();
    // GreatestCommonMultiple();
    PrimeNumber();
    return 0;
}
