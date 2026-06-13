//input adn output strings uisng gets() and puts();
#include<stdio.h>
int main()
{
	char str[40];
	printf("enter a name:\n");
	//gets(str);-----used in old computer also it is dangerous becaz keeps storing characters beyond the array boundary, causing: Memory corruption Program crashes Security vulnerabilities:
	fgets(str,sizeof(str),stdin);
	printf("The name is :");
	puts(str);
}
