// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int p = 0; p < t; p++)
    {
        int n;
        scanf("%d", &n);
        int a[n], b[n], c[n];

        for (int i = 0; i < n; i++) // array a input nelam
        {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < n; i++)
        {
            b[i] = a[i]; // a te b copy korlam
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (b[i] > b[j])
                {
                    int temp = b[i]; // swap kora
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            c[i] = abs(a[i] - b[i]); // neutra integer abs deye beyog kori
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", c[i]); // print c
        }
        printf("\n");
    }

    return 0;
}