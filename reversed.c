#include<stdio.h>
int main()
{
int n,rev,rem;
printf("Enter the number\n");
scanf("%d",&n);

for(rev=0;n>0;)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
printf("The reverse of the number is:%d",rev);

return 0;
}
