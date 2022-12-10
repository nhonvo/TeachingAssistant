#include <stdio.h>

void DivisorsNumber()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The divisors of %d are: ", num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    DivisorsNumber();
    return 0;
}
