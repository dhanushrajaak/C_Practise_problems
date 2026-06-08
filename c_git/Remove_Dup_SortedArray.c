/*********************************************************
 * Author      : DHANUSH RAJA A K
 * Date        : 09-06-2026
 * Program     : Remove Duplicates from Sorted Array
 * Description : Removes duplicate elements from a sorted
 *               array and returns the count of unique
 *               elements.
 *********************************************************/

#include <stdio.h>

int removeDuplicates(int *arr, int n);

int main()
{
    int n;

    printf("Enter the size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the sorted array elements:\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int k = removeDuplicates(arr, n);

    printf("\nArray after removing duplicates:\n");

    for(int i = 0; i < k; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nNumber of unique elements = %d\n", k);

    return 0;
}

int removeDuplicates(int *arr, int n)
{
    if(n == 0)
        return 0;

    int k = 1;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] != arr[i - 1])
        {
            arr[k] = arr[i];
            k++;
        }
    }

    return k;
}
