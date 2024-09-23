#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
int  gd=0,gm,x,y,sa,ea,r,i;
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
printf("Enter Radius :");
scanf("%d",&r);
x=250,y=250,sa=0,ea=15;
setcolor(4);
for(i=1;i<=24;i++)
{
pieslice(x,y,sa,ea,r);
sa=sa+15;
ea=ea+15;
delay(100);
}
getch();
closegraph();
}