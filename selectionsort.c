#include <stdio.h>
int main()
{
    int arr[] = {2, 4, 5, 8, 6, 1, 89, 87, 65};
    int min;
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        min = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[min] > arr[j])
            {
                int te = arr[min];
                arr[min] = arr[j];
                arr[j] = te;
            }
        }
    }
    for (int k = 0; k < len; k++)
    {
        printf("%d ", arr[k]);
    }
    return 0;
}
