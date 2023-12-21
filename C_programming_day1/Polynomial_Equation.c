#include <stdio.h>

int main() {
    int degree;
    printf("Enter the degree: ");
    scanf("%d", &degree);

    double coefficients[degree + 1];
    printf("Enter the coefficients: ");
    for (int i = 0; i <= degree; i++)   
    {
        scanf("%lf", &coefficients[i]);
    }
    double x;
    printf("Enter x value: ");
    scanf("%lf", &x);
    double result = coefficients[0];
    for (int i = 1; i <= degree; i++)
    {
        result = result * x + coefficients[i];
    }
    printf("P(%lf) = %lf\n", x, result);
   return 0;
}
