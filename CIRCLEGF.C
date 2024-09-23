#include<graphics.h>
#include<conio.h>
void main()
{
int gd=0,gm,x,y,r;
initgraph(&gd,&gm,"C:\\turboc3\\BGI");
printf("Enter the value of Radius :");
scanf("%d",&r);
x=getmaxx()/2;
y=getmaxy()/2;
setcolor(YELLOW);
circle(x,y,r);
getch();
closegraph();
}