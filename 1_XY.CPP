#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{

 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"");

 //  rectangle(100,50,190,100);
//   line(0,200,500,200);
  // circle(180,110,10);
   int x = getmaxx()/2;
   int y = getmaxy()/2;
//   printf("x=%d and y=%d",x,y);
 line(10,0,319,239);
  line(0,0,639,479);

   getch();
   closegraph();
 }