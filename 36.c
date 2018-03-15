#include<stdio.h>
#include<conio.h>
void main()
{
    char a[50];
    int i,temp=0;
    clrscr();
    printf("enter a sentence");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(((a[i]>=65)&&(a[i]<=91))||((a[i]>=97)&&(a[i]<=123))||a[i]=='.')
        {
        }
        else
        {
            temp++;
        }
    }
        printf("the numeric no. are=%d",temp);
        
    getch();
}
