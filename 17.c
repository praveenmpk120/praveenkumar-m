#include<stdio.h>
#include<conio.h>
void main ()
{
    int s=0,n,p,reminder;
    printf("enter n value");
    scanf("%d",&n);
    while(n>0)
    {
        reminder=n%10;
        s=s+reminder*reminder*reminder;
        n=n/10;
    }
    if(p==s)
    {
        printf("the value is armstrong");
    }
    else
    {
        printf("the value is not armstrong");
    }
    getch();
}
