//program to print the strings of the two dimensional character array.
#include<stdio.h>
#include<string.h>
#define	n 5
#define len 10
int main()
{
	char arr[n][len] =
	{
		"white",
		"red",
		"green",
		"yellow",
		"blue",
	};
	for(int i =0;i<n;i++)
	{
            printf("%s\n",arr[i]);
	    printf("%p\n",arr[i]);
	}
	
}
