#include<stdio.h>
#include<conio.h>
void main()
{
    int a[60],i,n,j,t;
    printf("enter n value");
    scanf("%d",&n);
    printf("enter an array value");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
     getch();
}
     
     
