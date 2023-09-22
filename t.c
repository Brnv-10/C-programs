#include <stdio.h>

int main(void)
{
    int N;

    printf("N: ");
    scanf("%d", &N);

    printf("Pascal triangle for N = %d\n", N);

    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int f1 = 1;
            int f2 = 1;
            int f3 = 1;
            for (int x = 1; x<= i; x++)
                f1 *= x;
            for (int x = 1; x <= j; x++)
                f2 *= x;
            for (int x = 1; x <= i-j; x++)
                f3 *= x;
            int p = (f1)/(f2*f3);

            if (j == i)
                printf("%d", p);
            else
                printf("%d,", p);
        }
        printf("\n");
    }

    return 0;
}
