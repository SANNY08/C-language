#include<graphics.h>
#include<conio.h>
void main()
{
int gd=0,gm,x,y,i,r;
initgraph(&gd,&gm,"C:\\turboc3\\BGI");
printf("Enter the value of Radius :");
scanf("%d",&r);
x=getmaxx()/2;
y=getmaxy()/2;
for(i=1;i<=100;i++)
{
setcolor(i);
circle(x,y,i);
r=r+10;
delay(10);
}
getch();
closegraph();
}


