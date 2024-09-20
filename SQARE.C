#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,h,l,w,pi=3.14; // A=area,b=breath,h= height,,l=lenght,w= width
float r;
clrscr();
printf("Enter side to calculate Square :");
scanf("%d",&a);
printf("\nSqare is : %d",a*a);

printf("\nEnter breath and height :");
scanf("%d%d",&b,&h);
printf("\nTriangle is : %d",1*(b*h)/2);

printf("\nEnter length and width :");
scanf("%d%d",&l,&w);
printf("\nReactangle is : %d",l*w);

printf("\nEnter radius :");
scanf("%f",&r);
printf("\n Area of circle is :%f",pi*r*r);
getch();
}
