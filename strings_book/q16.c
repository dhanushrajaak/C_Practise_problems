//program to input a date adn print the month.
#include<stdio.h>
int main()
{
	int d,m,y;
	char *str[] = 
	{
		"jan",
		"feb",
		"march",
		"apr",
		"may",
		"jun",
		"july",
		"aug",
		"sep",
		"oct",
		"nov",
		"dec"
	};
	printf("enter the (dd/mm/yyyy)\n");
	scanf("%d %d %d",&d,&m,&y);
	printf("%d %s %d",d,str[m-1],y);
	return 0;
}
