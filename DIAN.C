#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void obstracle1();
void obstracle2();
void obstracle3();
void man();
void endgame();
void manfly();
void mandown();
void continueu();//continue along with obstracle towards up
void continued();//continue along with obstracle towards down
//void obstracle4();
int gd=DETECT,gm,i,j,k,m,n,l,x,r,s,score=-1,over=1,v,w=0;
int main()
{

    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    //setcolor(9);
    rectangle(0,50,638,400);
    setfillstyle(1,3);
    floodfill(100,200,15);
    man();
   while(1)
   {
     r=-1,v=0,over=0;
   obstracle1();
  // obstracle2();
   // obstracle3();
  if(kbhit())
    {x=getch();
      exit();}

}
	getch();
    closegraph();
    return 0;
}


void obstracle1()
{   i=r;
   for(k=v;k<=100;k++)
  {  //rectangle(100,200,150,250);
    setcolor(WHITE);
    rectangle(608+i,225,638+i,250);
    setfillstyle(1,1);
    floodfill(623+i,237,15);

    delay(15);
    setcolor(3);
    rectangle(608+i,225,638+i,250);  //    rectangle(588+i,200,638+i,250);
    setfillstyle(1,3);
    floodfill(623+i,237,3);
    delay(15);
    i=i-5;r=i;v=k;
    
    if(kbhit())
  {  x=getch();

     over=1;
    manfly();
    score=score+1;
  }
  if(k>=95&&k<=100&&over==0)
      {endgame();}

}


//if(over==1)
  //endgame();
}
void continueu()
{

    setcolor(WHITE);
    rectangle(608+i,225,638+i,250);
    setfillstyle(1,1);
    floodfill(623+i,237,15);
    delay(3);
    setcolor(3);
    rectangle(608+i,200,638+i,225);                  //    rectangle(588+i,200,638+i,250);
    setfillstyle(1,3);
    floodfill(623+i,237,3);
    delay(3);
    i--;
      setcolor(WHITE);
   ellipse(100,200+j,0,360,5,10);
line(100,210+j,100,225+j);
line(100,225+j,97,250+j);//leg
line(100,225+j,105,250+j);
line(100,220+j,97,230+j);//hand
line(100,220+j,105,230+j);
    delay(3);
    setcolor(3);
   ellipse(100,200+j,0,360,5,10);
line(100,210+j,100,225+j);
line(100,225+j,97,250+j);
line(100,225+j,105,250+j);
line(100,220+j,97,230+j);//hand
line(100,220+j,105,230+j);
    delay(3);
    j--;
}
void man()
{
setcolor(WHITE);
ellipse(100,200,0,360,5,10);
line(100,210,100,225);
line(100,225,97,250);
line(100,225,105,250);
line(100,220,97,230);//hand
line(100,220,105,230);

}
void manfly()
{ j=-1;
  setcolor(3);
  ellipse(100,200,0,360,5,10);
line(100,210,100,225);
line(100,225,97,250);
line(100,225,105,250);
line(100,220,97,230);//hand
line(100,220,105,230);
//obstracle1();
  for(l=0;l<=60;l++)//to cause man to jump up
{
    continueu();


  }    j=0;
      for(l=0;l<=60;l++) //to cause man to sit down
	{continued();}
      man();
      r=i-120;
      v=k+120;


//mandown();

}
void continued()
{ setcolor(WHITE);
    rectangle(608+i,225,638+i,250);
    setfillstyle(1,1);
    floodfill(623+i,237,15);

    delay(3);
    setcolor(3);
    rectangle(608+i,225,638+i,250);                  //    rectangle(588+i,200,638+i,250);
    setfillstyle(1,3);
    floodfill(623+i,237,3);
    delay(3);
    i--;

  setcolor(WHITE);
    ellipse(100,140+j,0,360,5,10);
    line(100,150+j,100,165+j);
    line(100,165+j,97,190+j);
    line(100,165+j,105,190+j);
    line(100,160+j,97,170+j);
    line(100,160+j,105,170+j);
    delay(3);
    setcolor(3);
     ellipse(100,140+j,0,360,5,10);
    line(100,150+j,100,165+j);
    line(100,165+j,97,190+j);
    line(100,165+j,105,190+j);
    line(100,160+j,97,170+j);
    line(100,160+j,105,170+j);
    delay(3);
    j++;
  }




  void endgame()
{
  cleardevice();
  printf("\n\n\n\n\n\t\t\t\t\t..........GAME OVER.............");
  printf("\n\n\n\t\t\t\t\tYOUR SCORE %d",score);
  getch();
  exit();
}


void mandown()
{
j=1;
for(l=0;l<=60;l++)
{
    setcolor(WHITE);
    ellipse(100,70+j,0,360,5,10);
    line(100,80+j,100,120+j);
    line(100,120+j,97,170+j);
    line(100,120+j,105,170+j);
    line(100,90+j,97,100+j);
    line(100,80+j,105,100+j);
    delay(10);
    setcolor(3);
     ellipse(100,70+j,0,360,5,10);
    line(100,80+j,100,120+j);
    line(100,120+j,97,170+j);
    line(100,120+j,105,170+j);
    line(100,90+j,97,100+j);
    line(100,80+j,105,100+j);
    delay(10);
    j++;
  }
  man();
  over=0;
}




void obstracle2()
{i=-1,j=-1;
   for(k=0;k<=550;k++)
  {  //rectangle(100,200,150,250);
    setcolor(WHITE);
    rectangle(528+i,200,638+j,250);

    delay(5);
    setcolor(3);
    rectangle(528+i,200,638+j,250);


     i--,j--;
    delay(5);

  // cleardevice();
  }
  score=score+1;
}
void obstracle3()
{i=-1,j=-1;
   for(k=0;k<=580;k++)
  {  //rectangle(100,200,150,250);
    setcolor(WHITE);
    circle(583+i,225,25);

    delay(5);
    setcolor(3);
    circle(583+i,225,25);


     i--,j--;
    delay(5);
  // cleardevice();
  }
  score=score+1;
}