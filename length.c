#include<stdio.h>
void area ();

int main ()
{
	int l,b,area;
	printf("Enter the first number\n");
	scanf("%d",&l);
	printf("Enter the second number\n");
	scanf("%d",&b);
	area=l*b;
	printf("The area of rectangle is:%d",area);
	return 0;
}
