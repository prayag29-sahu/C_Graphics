#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>

void main()
{
 int gd=DETECT,gm;
 int x,y,i,j;
 initgraph(&gd,&gm," ");
 for(i=0;i<700;i++)
 { //head
   circle(20+i,200,10);
  // eyes
   circle(17+i,200,1);
   circle(24+i,200,1);
  //2nd head
  //circle(43+i,200,10);
  //2nd eyes
  //circle(40+i,200,1);
  //circle(47+i,200,1);


   line(20+i,210,20+i,250);
   //line(43+i,210,43+i,250);
   //arm
   line(20+i,220,10+i,250);
   line(20+i,220,30+i,250);
   //2 arm
   //line(43+i,220,30+i,250);
   //line(43+i,220,53+i,250);
   //stick
   line(30+i,170,30+i,250);
   //umb
   arc(30+i,180,0,180,50);
   arc(-10+i,180,0,180,10);
   arc(10+i,180,0,180,10);
   arc(30+i,180,0,180,10);
   arc(50+i,180,0,180,10);
   arc(70+i,180,0,180,10);

   //legs
   line(20+i,250,30+i,300);
   line(20+i,250,10+i,300);

   line(0,300,700,300);
   //2 lags
   //line(43+i,250,53+i,300);
   //line(43+i,250,33+i,300);

   //rain
   x=getmaxx();
   y=getmaxy();
   for(j=0;j<100;j++)
   {
     outtextxy(random(x),random(y-200)," | ") ;
   }
   cleardevice();
 }
 getch();
 closegraph();
}