/*********************************************************
 * Author      : DHANUSH RAJA A K
 * Date        : 09-06-2026
 * Program     : Majority Element in an Array
 * Description : Finds the majority element in an array
 *               using Moore's Voting Algorithm.
 *               A majority element is an element that
 *               appears more than n/2 times in the array.
 *********************************************************/

#include <stdio.h>

int majorityElement(int *arr, int n);

int main()
{
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    int majority = majorityElement(arr, n);

    printf("\nMajority Element: %d\n", majority);

    return 0;
}

int majorityElement(int *nums, int numsSize)
{
    int majority = nums[0];
    int count = 1;

    for(int i = 1; i < numsSize; i++)
    {
        if(count == 0)
        {
            majority = nums[i];
            count = 1;
        }
        else if(majority == nums[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    return majority;
}
