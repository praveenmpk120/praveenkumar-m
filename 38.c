#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    clrscr();
    printf("enter a,b value");
    scanf("%d%d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    
    
    printf("the first value is %d",a);
    printf("\nthe second value is %d",b);
    
    
    getch();
}
