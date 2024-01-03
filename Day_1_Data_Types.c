// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int a;
    double b;
    char p[100];

    scanf("%d\n", &a);
    scanf("%lf", &b);
    getchar();
    fgets(p, sizeof(p), stdin);

    int sum = a + b;
    double sum2 = b + b;

    printf("%d\n", sum);
    printf("%.1lf\n", sum2);
    printf("HackerRank %s", p);

    return 0;
}