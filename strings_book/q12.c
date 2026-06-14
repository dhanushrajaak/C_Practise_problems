//array of pointers in strings.
#include<stdio.h>
#include<string.h>
int main()
{
	char *arr[] =
	{
		"white",
		"red",
		"green",
		"yellow",
		"blue"
	};
	for(int i =0;i<5;i++)
	{
		printf("string %s\n",arr[i]);
		printf("address of strings %p\n",arr[i]);
		printf("address of strings is stored at %p\n",arr+i);
	}
	return 0;
}
