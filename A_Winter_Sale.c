#include <stdio.h>

int main()
{
    float dis, disErPoreDaam;
    scanf("%f %f ", &dis, &disErPoreDaam);

    float asolDaam = disErPoreDaam / (1.0 - (dis / 100.0));

    printf("%0.2f\n", asolDaam);

    return 0;
}

// now price = after discount/(1- (discount percent/100.0))