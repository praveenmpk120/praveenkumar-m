
#include<stdio.h>
#include<conio.h>

void main()
{
    char a[50];
    int i,temp=0;
    clrscr();
    printf("enter a sentence");
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
    if(a[i]==' ')
    {
        temp++;
    }
    }
    printf("the space of sentence is =%d",temp);
    getch();
}
