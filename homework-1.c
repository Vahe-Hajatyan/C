#include <stdio.h>
// 1
int main()
{
    char letter;
    printf("enter a letter ");
    scanf(" %c", &letter);
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    {
        printf("this is a vowel %c", letter);
    }
    else
    {
        printf("this is a consonant %c", letter);
    }
    // getch();
    return 0;
}

// // 2
int main()
{
    int a = 0;
    int b = 0;
    printf("enter the first number: ");
    scanf("%i", &a);
    printf("enter the second number: ");
    scanf("%i", &b);
    if (a > b)
    {
        printf("largest number = %i", a);
    }
    else
    {
        printf("largest number = %i", b);
    }
    // getch();
    return 0;
}

// 3
int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    printf("enter the first number: ");
    scanf("%i", &num1);
    printf("enter the second number: ");
    scanf("%i", &num2);
    printf("enter the third number: ");
    scanf("%i", &num3);
    if (num1 == num2 || num1 == num3 || num2 == num3)
    {
        if (num1 > num2 || num1 > num3)
        {
            printf("the largest number %i", num1);
        }
        else if (num2 > num1 || num2 > num3)
        {
            printf("the largest number %i", num2);
        }
        else if (num3 > num1 || num3 > num2)
        {
            printf("the largest number %i", num3);
        }
    }
    else
    {
        printf("two numbers must be the same");
    }
    // getch(); for exe file
    return 0;
}