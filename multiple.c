#include<stdio.h>
int main()
{
int i=1,n,a;
printf("Enter any number");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
a=n*i;
printf("%d*%d=%d\n",n,i,a);
}
return(0);
}
