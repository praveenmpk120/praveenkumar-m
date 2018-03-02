#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,t;
    clrscr();
    printf("enter a,b value");
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("the first value is %d",a);
    printf("\nthe second value is %d",b);
    
    
    getch();
}
