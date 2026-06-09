/*********************************************************
 * Author      : DHANUSH RAJA A K
 * Date        : 09-06-2026
 * Program     : Majority Element in an Array
 * Description : Finds and prints the maximum occurrence count
                 of the dominant element in the array.
 *********************************************************/
#include <stdio.h>
int majority_element(int *arr,int n); 

int main()
{
    int n;
    printf("enter a size of an array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements:\n");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    majority_element(arr,n);
    return 0;
}



int majority_element(int *arr,int n)
{
    int majority =0;
    for(int i =0;i<n;i++)
    {
        int count = 0; 
        for(int j =0;j<n;j++)
        {
            
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>majority)
        {
            majority = count;
        }
    }
    printf("The majority is %d",majority);
}
