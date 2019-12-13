#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void plott(float rx,float ry,float xc,float yc){
	float x=0.0,y=ry;
	float p=(ry*ry)-(rx*rx*ry)+((rx*rx)/4);
	float p1;
	while((2*ry*ry*x)<=(2*rx*rx*y)){
		putpixel(x+xc,y+yc,7);
		putpixel(-x+xc,y+yc,7);
		putpixel(x+xc,-y+yc,7);
		putpixel(-x+xc,-y+yc,7);
		x++;
		if(p<0){
		   p=p+(2*ry*ry*x)+(ry*ry);
		}
		else{
			y--;
			p=p+(2*ry*ry*x)-(2*rx*rx*y)+(ry*ry);
		}
	}
	p1=((ry*ry)*pow((x+0.5),2))+((rx*rx)*pow((y-1.0),2))-(pow(rx,2)*pow(ry,2));
	while(y!=0){
		putpixel(x+xc,y+yc,7);
		putpixel(-x+xc,y+yc,7);
		putpixel(x+xc,-y+yc,7);
		putpixel(-x+xc,-y+yc,7);
		y--;
		if(p1>0){
			p1=p1-(2*rx*rx*y)+(rx*rx);
		}
		else{
			x++;
			p1=p1+(2*ry*ry*x)-(2*rx*rx*y)+(rx*rx);

		}

	}
}
void main(){
	float gd=DETECT,gm,rx,ry,xc,yc;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	printf("Input (rx,ry):");
	scanf("%f%f",&rx,&ry);
	printf("Input (xc,yc):");
	scanf("%f%f",&xc,&yc);
	plott(rx,ry,xc,yc);
	line(xc,ry+xc,xc,xc-ry);
	line(xc-rx,yc,xc+rx,yc);
	outtextxy(xc,yc,"Centre");
	outtextxy((xc+rx),yc,"(x,-y)");
	outtextxy(xc,yc-ry-15,"(x,y)");
	outtextxy(xc-rx-45,yc,"(-x,y)");
	outtextxy(xc,yc+ry,"(-x,-y)");
	getch();
	closegraph();
}