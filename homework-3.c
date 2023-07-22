#include <stdio.h>
#include <conio.h>
// tnayin 1
int main()
{
    int numArr[5];
    for (int a = 0; a < 5; ++a)
    {
        printf("enter number in array = ");
        scanf("%d", &numArr[a]);
    }
    printf("the number = ");
    for (int b = 0; b < 5; ++b)
    {
        printf("%d,", numArr[b]);
    }
    getch();
    return 0;
}

// tnayin 2
int main()
{
    char *symbolArr = malloc(5);
    for (int a = 0; a < 5; ++a)
    {
        printf("enter symbol in array = ");
        scanf("%s", &symbolArr[a]);
    }
    printf("the symbol = ");
    for (int b = 0; b < 5; ++b)
    {
        printf("%i,", symbolArr[b]);
    }
    getch();
    free(symbolArr); // hishoxucun@ jnjuma
    return 0;
}

// tnayin 3
void reversStr(char *str)
{
    int length = strlen(str);

    for (int a = 0, b = length - 1; a < b; ++a, --b)
    {
        char symbol = str[a];
        str[a] = str[b];
        str[b] = symbol;
    }
}
int main()
{
    char str[] = "";
    printf("enter string for revers = ");
    scanf("%s", str);
    reversStr(str);
    printf("%s", str);
    getch();
    return 0;
}

// tnayin 4
void square(int height)
{
    for (int a = 0; a <= height; ++a)
    {
        if (a == 0 || a == height)
            printf("* * * * * *\n");
        else
            printf("*         *\n");
    }
}
int main()
{
    int height;
    printf("enter height for square = ");
    scanf("%i", &height);
    square(height);
    getch();
    return 0;
}