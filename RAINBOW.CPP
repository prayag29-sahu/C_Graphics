#include<graphics.h>
#include<conio.h>
#include<dos.h>
int main()
{
 int gd=DETECT,gm;
 int x,y,r;
 initgraph(&gd,&gm,"");
 x=getmaxx()/2;
 y=getmaxy();
 for(r=20;r<300;r++)
 {
   delay(100);
   setcolor(r/10);
   arc(x,y,0,180,r);
 }
 getch();
 closegraph();
}