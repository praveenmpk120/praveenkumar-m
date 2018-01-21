#iclude<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter a value");
scanf("%d",&a);
if (a<0)
{
printf("a is negative");
}
else
{
printf("a is positive");
}
else if(a=0)
{
printf("a is zero");
}
getch();
}
