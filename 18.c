#include<stdio.h>
#include<conio.h>
void main()
{
int lw,up,temp,a,arm=0;
printf("enter lw,up value");
scanf("%d%d",&lw,&up);
for(j=lw;j<up;j++)
{
temp=j;
for(i=0;temp!=0;i++)
{
a=temp%10;
arm=arm+(a*a*a);
temp=temp/10;
}
if(j==arm)
{
printf("\n%d",arm);
arm=0;
}
}
getch();
}
