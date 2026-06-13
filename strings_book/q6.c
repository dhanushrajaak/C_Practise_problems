//program to understand the work of strcmp() function.
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[40];
	char str2[40];
	printf("enter a string:\n");
	fgets(str1,sizeof(str1),stdin);
	fgets(str2,sizeof(str2),stdin);
	if(strcmp(str1,str2)==0)
	{
		printf("both are same\n");
	}else
	{
		printf("not same");
	}
}
