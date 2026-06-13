//write a program to print character of a string and address of each character.
#include<stdio.h>

int main()
{

	char str[]="india";
	for(int i =0;str[i]!='\0';i++) 
	{
		printf("character is %c\n",str[i]);
		printf("address of the charcter is %p\n",&str[i]);
	}
}

