/*********************************************************
 * Author      : DHANUSH RAJA A K
 * Date        : 08-06-2026
 * Program     : Remove Element from Array
 * Description : Removes all occurrences of a given value
 *               and returns the count of remaining elements.
 *********************************************************/

#include <stdio.h>
int removeElement(int *nums, int numsSize, int val);

int main()
{
    int numsSize, val;

    printf("Enter the array size:\n");
    scanf("%d", &numsSize);

    int arr[numsSize]; 

    printf("Enter the array elements:\n");
    for(int i = 0; i < numsSize; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    for(int i = 0; i < numsSize; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the number to be deleted: ");
    scanf("%d", &val);

    int k = removeElement(arr, numsSize, val);

    printf("\nArray after deletion:\n");
    for(int i = 0; i < k; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nNumber of remaining elements = %d\n", k);

    return 0;
}

int removeElement(int *nums, int numsSize, int val)
{
    int k = 0;

    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] != val)
        {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}
