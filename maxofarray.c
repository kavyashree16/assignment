// C program to find maximum in arr[] of size n
#include <stdio.h>

// C function to find maximum in arr[] of size n
int largest(int arr[], int n)
{
    int i;

    // Initialize maximum element
    int max = arr[0];

    // Traverse array elements from second and
    // compare every element with current max 
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}

int main()
{
    int arr[] = {10, 400++/, 55, 1000, 10000};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Largest in given array is %d", largest(arr, n));
    return 0;
}
// time complexity is 0(n)
