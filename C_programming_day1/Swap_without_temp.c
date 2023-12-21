#include<stdio.h>
#include<conio.h>

int main() 
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("num1 = %d\n", a);
    printf("num2 = %d\n", b);

    return 0;
}
