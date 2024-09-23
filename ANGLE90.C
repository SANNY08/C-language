#include<graphics.h>
#include<conio.h>
void main()
{
int gd=0,gm,x,y,sa,ea,r;
initgraph(&gd,&gm,"C:\\turboc3\\BGI");
x=250,y=250,sa=0,ea=90,r=100;
setcolor(9);
pieslice(x,y,sa,ea,r);
getch();
closegraph();
}
