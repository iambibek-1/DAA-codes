#include <stdio.h>

int binarySearch(int arr[], int size, int target)
{
    int start = 0, end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    int result = binarySearch(arr, size, target);
    if (result != -1)
    {
        printf("Target %d found at index %d\n", target, result);
    }
    else
    {
        printf("Target %d not found in the array\n", target);
    }
    return 0;
}
