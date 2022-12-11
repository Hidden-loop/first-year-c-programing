// binary search, using iteration
#include <all.h>
int binsearch(int arr[], int x, int low, int high)
{
    int mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

void main()
{
    clrscr();
    printf("binary search program\n");

    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // sorted arrays are required for best result, sort arrays if taken from user!
    int x = 3;
    int n = sizeof(array) / sizeof(array[0]);
    int result = binsearch(array, x, 0, n - 1);
    if (result == -1)
    {
        printf("\nnot found");
    }
    else
        printf("\nresult is at:%d", result);
    getch();
}