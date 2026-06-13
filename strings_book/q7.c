//strcpy() function;
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10],str2[10];
	printf("enter the string\n");
	scanf("%s",str1);
	scanf("%s",str2);
	strcat(str1,str2);
	printf("now the str1%s\nstr2%s\n",str1,str2);
}
