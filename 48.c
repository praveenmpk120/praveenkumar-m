#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,n1,n,sum=0;
    clrscr();
    printf("enter range");
    scanf("%d",&n);
    printf("enter a value");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<=a[i];i++)
    {
        sum=((sum+a[i]));
    }
    
    printf("the value is=%d",sum/n);
      getch();
    
}
