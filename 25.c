#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a[10],n,t;
    printf("enter n value");
    scanf("%d",&n);
    printf("enter an array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t
;            }
        }
    }
for(i=0;i<n;i++)
{
    printf("%d",a[i]);
}
printf("median elemnts\n");
printf("%d",a[n/2]);
getch();

}
