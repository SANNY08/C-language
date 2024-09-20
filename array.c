#include<stdio.h>
#include<conio.h>

void main()
{
    int i,s=0;
    int marks[5];
    printf("Enter marks of 5 Subject :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        s=s+marks[i];
    }
    printf("Total marks enterd :%d ",s);
    getch();


}
