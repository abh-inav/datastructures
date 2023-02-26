#include <stdio.h>
int main()
{
    int ar[] = {6,7,4,2,4,6,2,1,8,4,12,34,54,23,12,0};
    int size = sizeof(ar) / sizeof(ar[0]);
    printf("size of array : %d\n", size);
    printf("elements of array :");
    for (int v = 0; v < size; v++)
    {
        printf(" %d ", ar[v]);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                int sp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = sp;
            }
        }
    }
    printf("\n");
    printf("elements of array after :");
    for (int v = 0; v < size; v++)
    {
        printf(" %d ", ar[v]);
    }
    return 0;
}
