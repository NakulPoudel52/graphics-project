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
//void obstracle4();
int gd=DETECT,gm,i,j,k,m,n,l,x,r,s,score=-1,over=1,v,w=0;
int main()
{

    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    //setcolor(9);
    rectangle(5,50,638,400);
    setfillstyle(1,3);
    floodfill(100,200,15);
    man();
   while(1)
   {
     r=-1,v=0;
   obstracle1();
  // obstracle2();
   // obstracle3();

}
/*  i=getmaxx();
  printf("%d",i);*/
	getch();
    closegraph();
    return 0;
}


void obstracle1()
{   i=r;
   for(k=v;k<=580;k++)
  {  //rectangle(100,200,150,250);
    setcolor(WHITE);
    rectangle(588+i,200,638+i,250);
    setfillstyle(1,1);
    floodfill(600+i,225,15);

    delay(10);
    setcolor(3);
    rectangle(588+i,200,638+i,250);
    setfillstyle(1,3);
    floodfill(600+i,225,3);
    delay(10);
    i--;r=i;v=k;
    if(kbhit())
  {  x=getch();

    manfly();

  }

}

score=score+1;
if(over==1)
  //endgame();
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
void man()
{
setcolor(WHITE);
ellipse(100,150,0,360,5,10);
line(100,160,100,200);
line(100,200,97,250);
line(100,200,105,250);
line(100,170,97,180);
line(100,170,105,180);

}
void manfly()
{ j=-1;
  setcolor(3);
  ellipse(100,150,0,360,5,10);
line(100,160,100,200);
line(100,200,97,250);
line(100,200,105,250);
line(100,170,97,180);
line(100,170,105,180);
printf("yyy");
obstracle1();
printf("nnn");
  for(l=0;l<=60;l++)
{

    setcolor(WHITE);
    ellipse(100,150+j,0,360,5,10);
    line(100,160+j,100,200+j);
    line(100,200+j,97,250+j);
    line(100,200+j,105,250+j);
    line(100, 170+j,97,180+j);
    line(100,170+j,105,180+j);
    delay(10);
    setcolor(3);
     ellipse(100,150+j,0,360,5,10);
    line(100,160+j,100,200+j);
    line(100,200+j,97,250+j);
    line(100,200+j,105,250+j);
    line(100,170+j,97,180+j);
    line(100,170+j,105,180+j);
    delay(10);
    j--;
    while(w<=1)
    {//obstracle1();
      w++;}
}
mandown();

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


  void endgame()
{
  cleardevice();
  printf("\n\n\n\n\n\t\t\t\t\t..........GAME OVER.............");
  printf("\n\n\n\t\t\t\t\tYOUR SCORE %d",score);
  getch();
  exit();
}



