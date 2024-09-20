#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,p;
    for(i=1;j<=5;i++)
    {
        if(j<=6-i || j>=4+i)
        {
            printf("*");
            p=0;
        }
        else
        {
            printf(" ");
            p=1;
        }
    }
    printf("\n");
}
