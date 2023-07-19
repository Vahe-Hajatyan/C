#include <stdio.h>
#include <conio.h>
// 1
int main()
{
    // whether the year is a leap year or not.
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }
    getch();
    return 0;
}

// 2 the greatest common divisor of these numbers.
int calculateGCD(int num1, int num2)
{

    if (num2 == 0)
    {

        return num1;
    }

    return calculateGCD(num2, num1 % num2);
}
int main()
{
    int num1, num2, num3;

    printf("enter the first number: ");
    scanf("%d", &num1);
    printf("enter the second number: ");
    scanf("%d", &num2);
    printf("enter the third number: ");
    scanf("%d", &num3);

    int gcd = calculateGCD(num1, calculateGCD(num2, num3));

    printf("The greatest common divisor is: %d\n", gcd);
    getch();
    return 0;
}

// 3
int main()
{
    int num;

    printf("Enter an integer: ");

    scanf("%d", &num);

    if ((num & (1 << 5)) == 0)
    {
        num |= (1 << 5);
        printf("Modified number: %d\n", num);
    }
    else
    {
        printf("Original number: %d\n", num);
    }
    getch();
    return 0;
}