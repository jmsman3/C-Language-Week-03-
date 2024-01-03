#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                long long int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    long long int Sum = 0;
    for (int i = 0; i < k; i++)
    {
        if (Sum + a[i] > Sum)
        {
            Sum += a[i];
        }
        else
        {
            break;
        }
    }

    printf("%lld\n", Sum);
    return 0;
}
