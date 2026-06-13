//nesting of strcat() and strcpy();
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20]="dhanush ";
	char str2[20]="raja ";
	
	strcat(str1,str2);
	printf("%s\n",str1);
	strcpy(str2,"A K");
	strcat(str1,str2);
	printf("%s",str1);
}

