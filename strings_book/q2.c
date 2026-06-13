//program to print the address and charcter of a string using pointers.
#include<stdio.h>
int main()
{
	char str[]= "india";
	char *p;
	p=str;
	while(*p!='\0')
	{
		printf("character is %c\t",*p);
		printf("addres of charcter is %p\n",p);
		p++;
	}
}
