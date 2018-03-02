#include<stdio.h>
#include<conio.h>
void main ()
{ 
    int a[30],i,j,n,t;
    clrscr();
    printf("enter n value");
scanf("%d",&n);
    printf("enter the no.of elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
                
            }
        }
    }
    printf("the maximum value is=%d",t);
    getch();
}
