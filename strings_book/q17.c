//program to sort the string s represented by araay of pointer,
#include<stdio.h>
#include<string.h>
int main()
{
	int n =5;
	char *arr[]=
	{
		"white",
		"red",
		"green",
		"yellow",
		"blue"
	};
	char *temp;
	printf("before swap\n");
	for(int i =0;i<n;i++)
	{
		printf("%s",arr[i]);
	}
	for(int i =0;i<n;i++)
	{
		for(int j =i+1;j<n;j++)
		{
			if(strcmp(arr[i],arr[j])>0)
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("after sorting\n");
	for(int i =0;i<n;i++)
	{
		printf("%s",arr[i]);
	}
}
