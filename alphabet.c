/*
NAME: Asbin timalsina
labsheet:14
Programe:to check character assigned from user is alphabet or not
*/

#include<stdio.h>
int main()
{
char c;
int ASCII;
printf("enter any chareacter=\n");
scanf("%c",&c);
ASCII=c;
if((ASCII>=65&&ASCII<=90)||(ASCII>=97&&ASCII<=122))
{
printf("the character is an alpdhabet");
}
else
{
printf("the character is not alphabet");
}
return(0);
}
