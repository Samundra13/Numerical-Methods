#include <stdio.h>
#include <conio.h>
#include <graphics.h>
 void bare();
 void bare3d();
 void chart();
void main ()
{

int gd=DETECT,gm,a;
initgraph(&gd,&gm,"C:\\TC\\BGI");

while(1){
  //    clrscr();
printf("press 1 to bar\n press 2 to 3d bar");
scanf ("%d",&a);

switch(a){
     case 1:bare();
	      break;
     case 2:bare3d();
	     break;
     case 3: chart();
     break;
       default: exit(0);
       }
       getch();
       clrscr();
      }
getch();
closegraph();
}

void bare()
{         line(50,50,50,400);
line(50,400,400,400);

      setfillstyle(SOLID_FILL,BLUE);
//floodfill(81,83,3);
bar(80,80,130,400);
//floodfill(81,83,3);
setfillstyle(SOLID_FILL, GREEN);
outtextxy(80,430,"a");
//setfillstyle(SOLID_FILL, YELLOW);
bar(180,120,230,400);
outtextxy(180,430,"b");
setfillstyle(SOLID_FILL,YELLOW);
bar(280,150,330,400);
outtextxy(280,430,"c");
setfillstyle(SOLID_FILL, RED);
bar(380,100,430,400);
outtextxy(380,430,"d");
}

void bare3d(){
line(50,50,50,400);
line(50,400,400,400);

setfillstyle(SOLID_FILL,BLUE);
//floodfill(81,83,3);
bar3d(80,80,130,400,5,1);
//floodfill(81,83,3);
setfillstyle(SOLID_FILL, GREEN);
outtextxy(80,430,"a");
//setfillstyle(SOLID_FILL, YELLOW);
bar3d(180,120,230,400,5,1);
outtextxy(180,430,"b");
setfillstyle(SOLID_FILL,YELLOW);
bar3d(280,150,330,400,5,1);
outtextxy(280,430,"c");
setfillstyle(SOLID_FILL, RED);
bar3d(380,100,430,400,5,1);
outtextxy(380,430,"d");
}

void chart(){
setfillstyle(SOLID_FILL,BLUE);
pieslice(200,200,0,70,100);
setfillstyle (SOLID_FILL,YELLOW);
pieslice(200,200,70,360,100);
}