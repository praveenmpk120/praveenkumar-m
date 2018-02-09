#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,s=1;
    clrscr();
    printf("enter n value");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s*i;
    }
    printf("%d",s);
    getch();
    
}
