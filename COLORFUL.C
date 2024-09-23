#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm,i,x,y;
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
x=200,y=100;
for(i=1;i<=250;i++)
{
putpixel(x,y,i);
y=y+1;
//x=x+1;
}
getch();
closegraph();

}