#include <stdio.h>

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {11, 8, 6, 5, 10, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array is: ");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("Sorted array is: ");
    printArray(arr, n);

    return 0;
}
