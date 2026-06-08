/*********************************************************
 * Author      : DHANUSH RAJA A K
 * Date        : 08-06-2026
 * Program     : Find Third Largest Element in an Array
 * Description : This program reads an array of integers
 *               and finds the third largest distinct
 *               element in the array.
 *********************************************************/


#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    int first_largest = INT_MIN;
    int second_largest = INT_MIN;
    int third_largest = INT_MIN;
    printf("enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements :\n");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max =0;
    for(int i =0;i<n;i++)
    {
        //printf("%d\n",arr[i]);
        if(arr[i]>first_largest)
        {
            third_largest=second_largest;
            second_largest=first_largest;
            first_largest=arr[i];
        }
        else if(arr[i]>second_largest && arr[i]!=first_largest)
        {
            second_largest=arr[i];
        }
        else if(arr[i]>third_largest && arr[i]!=second_largest&& arr[i]!=first_largest )
        {
            third_largest = arr[i];
        }
    }
    printf(" The First largest element is %d\n",first_largest);
    printf(" The Second largest element is %d\n",second_largest);
    printf(" The Second largest element is %d\n",third_largest);
}
