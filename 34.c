#include<stdio.h>
#include<conio.h>

void main()
{
    char a[50];
    int i,c=0;
    clrscr();
    printf("enter a sentence");
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
    if(a[i]=='.')
    {
        c++;
    }
    }
    printf("the sentence is =%d",c);
    getch();
}
