#include<stdio.h>
#include<conio.h>
void main()
{
    char n[50];
    int i,s=0;
    clrscr();
    printf("enter a sentence");
    scanf("%s",n);
    for(i=0;n[i]!='\0';i++)
    {
if(((n[i]>=65)&&(n[i]<=91))||(n[i]>=97)&&(n[i]<=123)||n[i]=='.')
        {
        }
        else
        {
            s++;
        }
    }
        printf("the numeric no. are=%d",s);
        
    getch();
}
