#include<stdio.h>
#include<conio.h>
void main ()
{
    int n,i,s,m;
    clrscr();
    printf("enter n,m value");
    scanf("%d %d",&n,&m);
    
    printf("prime intervels are=%dto%d",n,m);
    
    while(n<m)
    {
        s=0;
    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
        s=1;
        break;
        }
    }
        if(s==0)
        
        {
            printf("%d",n);
            ++n;
        }
    }
    
    getch();
    }
