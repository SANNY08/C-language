#include<graphics.h>
#include<conio.h>
void main()
{
int gm,gd=DETECT,i,x,y;
initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
x=100,y=100;
for(i=1;i<=200;i++)
{
putpixel(x,y,i);
x=x+1;
y=y+1;
}
getch();
closegraph();
}