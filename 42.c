#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[100],b[100];
    int n;
    clrscr();
    printf("enter a name1");
    scanf("%s",a);
    printf("enter a name 2");
    scanf("%s",b);
    n=strlen(a);
    n1=strlen(b);
    if(n<n1)
    {
        printf("big string=%s",b)
    }
    else
    {
        printf("big string=%s",a)
        
    }
    getch();
}
   
