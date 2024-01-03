// Online C compiler to run C program online
#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);
    for (int k = 0; k < t; k++)
    {
        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        int product = a * b * c;

        if (product == 0)
        {
            printf("%lld\n", 0);
        }
        else if (m % product == 0)
        {
            printf("%lld\n", m / product);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}