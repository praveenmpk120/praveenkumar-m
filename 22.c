#include<stdio.h>
#include<conio.h>
void main()
{
    int a[25],i,n,max;
    printf("enter n value");
    scanf("%d",&n);
    printf("enter an array value");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);

    getch();
}
