#include<stdio.h>
#include<conio.h>
void main()
{
    int a[60],i,n,min;
    printf("enter n value");
    scanf("%d",&n);
    printf("enter an array value");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    
        printf("minmum =%d",min);
    }
    getch();
    
    
}
