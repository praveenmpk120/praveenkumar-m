#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,j,n,temp=0;
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
        for(j=i+1;j<n;j++)
        {
            
        
        if(a[i]>a[j])
        {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        }
        
        }   
    }
            printf("the small ,large value is=%d:%d",a[0],a[n-1]);
        

    
    getch();
    
}
