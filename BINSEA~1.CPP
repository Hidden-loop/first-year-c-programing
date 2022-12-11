// binary search, using recursion
#include <all.h>
int binsearch(int arr[], int x, int low, int high)
{
    int mid;
    if (low <= high)
    {
        mid = (low + (high - low)) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            return binsearch(arr, x, low, mid - 1);
        }
        else
        {
            return binsearch(arr, x, mid + 1, high);
        }
    }
	return -1;
}

void main()
{
    clrscr();
    printf("binary search program");

    int array[10] = {1, 3, 2, 4, 7, 6, 8, 9, 0, 5};
    int x = 7;
    int n = sizeof(array) / sizeof(array[0]);
    int result = binsearch(array, x, 0, n - 1);
    if (result == -1)
    {
        printf("\nnot found");
    }
    else
        printf("result is at:%d", result);
    getch();
}