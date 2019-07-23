#include<stdio.h>
#include<conio.h>

int main()
{
	printf("Hello World");
	int x=10;
	int y=20;
	int z=x+y ;
	int temp=x;
	x=y;
	y=temp;
	
	printf("%d",z);
	return 0;
}
