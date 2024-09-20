#include<stdio.h>
#include<conio.h>
void main()
{
    int g,t,s=0,v;
    printf("Enter a number :");
    scanf("%d",&g);
    t=g;
    while(t!=0)
    {
        v=t%10;
        s=s+(v*v*v);
        t=t/10;
    }
    if(s==g)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }
    getch();
}
