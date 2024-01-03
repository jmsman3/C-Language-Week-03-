#include <stdio.h>
#include <math.h>

void solve(double meal_cost, int tip_percent, int tax_percent) {
    // Calculate tip and tax amounts
    double tip = meal_cost * ((double)tip_percent / 100);
    double tax = meal_cost * ((double)tax_percent / 100);

    // Calculate total cost including tip and tax
    double total_cost = meal_cost + tip + tax;

    // Round the total cost to the nearest integer
    int rounded_total_cost = (int)round(total_cost);

    // Print the rounded total cost
    printf("%d\n", rounded_total_cost);
}

int main() {
    double meal_cost;
    int tip_percent, tax_percent;

    // Taking input from the user
    scanf("%lf %d %d", &meal_cost, &tip_percent, &tax_percent);

    // Call the solve function with user input
    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
