//string pointers.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *str;
	str=(char*)malloc(20);
	printf("enter a string:\n");
	scanf("%s",str);
	printf("%s",str);
}
