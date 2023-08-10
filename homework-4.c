#include <stdio.h>

void BubbleSort(int *arrNum, int arrSize)
{
    for (int i = 0; i < arrSize - 1; ++i)
    {
        for (int j = 0; j < arrSize - i - 1; ++j)
        {
            if (arrNum[j + 1] < arrNum[j])
            {
                int tem = arrNum[j];
                arrNum[j] = arrNum[j + 1];
                arrNum[j + 1] = tem;
            }
        }
    }
}
int main()
{
    int arr[] = {10, 15, 16, 12, 18, 19, 13, 22};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    BubbleSort(arr, arrSize);

    for (int a = 0; a < arrSize; ++a)
    {
        printf("%d,", arr[a]);
    }
    return 0;
}