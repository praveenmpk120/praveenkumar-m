#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    clrscr();
    printf("enter a,b value");
    scanf("%d%d",&a,&b);
    c=pow(a,b);
    printf("answer is=%d",c);
    getch();
}
