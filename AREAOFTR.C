#include<stdio.h>
#include<conio.h>
void main()
{
int b,h,tr ;//B= base, H= height
clrscr();
printf("Enter base : ");
scanf("%d",&b);
printf("Enter heigh :");
scanf("%d",&h);
tr=(b*h)/2;
printf("Area of triangle :%d",tr);
getch();
}