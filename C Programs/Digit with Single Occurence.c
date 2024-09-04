#include <stdio.h>

int main()
{
    long n;
    while (1)
    {
        printf("\n\nEnter the number [-1 to STOP] : ");
        scanf("%ld", &n);
        if (n == -1)
        {
            printf("\nExiting Now ...");
            break;
        }
        else
        {
            int freq[10] = {0};
            long copy = n, digit = 0, result = 0;

            while (copy != 0)
            {
                digit = copy % 10;
                copy /= 10;

                if (digit >= 0 && digit <= 9)
                    freq[digit]++;
            }

            for (int i = 0; i < 10; i++)
            {
                if (freq[i] == 1)
                {
                    printf("\n%d occured only once.", i);
                }
            }
        }
    }
}