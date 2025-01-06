#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>
#include<dos.h>

void main()
{

 int gdriver=DETECT,gmode,x;
 initgraph(&gdriver,&gmode,"");
  setbkcolor(WHITE);
 for(x=0;x<600;x=x+10) {
   cleardevice();
   setcolor(RED);
   rectangle(100+x,50,190+x,100);
   line(0,120,1000,120);
   setcolor(GREEN);
   circle(120+x,110,10);
   circle(180+x,110,10);
   delay(100);
 }

   getch();
   closegraph();
 }