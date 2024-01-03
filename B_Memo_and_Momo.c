#include <stdio.h>

int main()
{

    long long int a, b, k;
    scanf("%lld %lld %lld ", &a, &b, &k);

    if (a % k == 0 && b % k == 0)
    {
        printf("Both");
    }

    // 2nd
    else if (a % k == 0 && b % k != 0)
    {
        printf("Memo\n");
    }

    // 3rd part
    else if (a % k != 0 && b % k == 0)
    {
        printf("Momo\n");
    }

    // 4th part
    else
    {
        printf("No One\n");
    }

    return 0;
}
