#include<stdio.h>
void area ();

int main ()
{
	area();
	return(0);
}
void area()
{
	int l,b,area;
	printf("Enter the first number\n");
	scanf("%d",&l);
	printf("Enter the second number\n");
	scanf("%d",&b);
	area=l*b;
	printf("The area of rectangle is:%d",area);

}
