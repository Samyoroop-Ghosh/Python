#include <stdio.h>
#include <stdbool.h>

int isPrime(int x)
{
    int flag = 1;
    if (x == 1)
        flag = 0;
    else
    {
        for (int i = 2; i <= x / 2; i++)
        {
            if (x % i == 0)
            {
                flag = 0;
            }
        }
    }
    return flag;
}

int main()
{
    while (1)
    {
        int n;
        int sum = 0;
        printf("\n\nEnter N : \n");
        scanf("%d", &n);
        if (n == -1)
        {
            printf("\nExiting Now ...");
            break;
        }
        else
        {
            printf("\nOdd Prime Numbers betwwen 0-N : \n");
            for (int i = 1; i < n; i += 2)
            {
                if (isPrime(i))
                {
                    printf("%d, ", i);
                    sum += i;
                }
            }
            printf("\nSum : \n%d", sum);
        }
    }
}
