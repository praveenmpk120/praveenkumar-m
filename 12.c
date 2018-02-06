#include<stdio.h>
#include<conio.h>
void main()
{
    int rs,n,r,o;
    printf("enter n value");
    scanf("%d",&n);
    o=n;
    while(n!=0)
    {
        r=n%10;
        rs=rs*10+r;
        n/=10;
    }
    if(o==rs)
    {
        printf("%d is polindrome");
    }
    else
    {
        printf("%d is not polindrome");
    }
    getch();
    
}
