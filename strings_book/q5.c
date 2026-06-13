//strlen functions().
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	printf("enter a string:\n");
	fgets(str,sizeof(str),stdin);
	printf("length of an array is %u",strlen(str)); //strlen takes only the values exmaple if dnh is ther normally strign consider '\0',but strlen does not consider '\0'.
}
