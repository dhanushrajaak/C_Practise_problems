/*********************************************************
 * Author      : DHANUSH RAJA A K
 * Date        : 08-06-2026
 * Program     : Find Largest Element in an Array
 * Description : This program reads an array of integers
 *               and finds the largest element present
 *               in the array.
 *********************************************************/


#include<stdio.h>
int main()
{
    int n;
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
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf(" The largest element is %d",max);
}
