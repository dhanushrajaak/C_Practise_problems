//program to sort the array of strings.
#include<stdio.h>
#include<string.h>
#define n 5
#define len 10
int main()
{
	char arr[n][len] = 
	{
		"white",
		"red",
		"green",
		"yellow",
		"blue"
	};
	char temp[len];
	printf("before sorting..\n");
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

				strcpy(temp,arr[i]);
				strcpy(arr[i],arr[j]);
				strcpy(arr[j],temp);
			}
		}
	}
	printf("after sorting..\n");
	for(int i =0;i<n;i++)
	{
		printf("%s",arr[i]);
	}
	return 0;
}
