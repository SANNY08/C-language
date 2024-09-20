#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a=-1,b=1,c,i;
    printf("Enter a range :");
    scanf("%d",&n);
    printf("Fibonacci Number is : ");
    for(i=0;i<n;i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
    getch();
}
