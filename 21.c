#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,s,max=0;
    printf("enter a,b value");
    scanf("%d\n%d",&a,&b);
    if(a>b)
    {
      max=a;
    }
    else
    {
        max=b;
    }
        for(i=2;i<max;i++)
        {
            if((a%i==0)&&(b%i==0))
            s=i;
            
                
            }
            
            printf("%dand%d is %d",a,b,s);
        
                
            
        
        getch();
    }
