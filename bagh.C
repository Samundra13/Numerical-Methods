#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void bagh(){
	line(50,50,150,50);
	line(50,50,50,150);
	line(50,150,150,150);
	line(150,150,150,50);
	line(50,50,150,150);
	line(150,50,50,150);
	line(100,50,50,100);
	line(50,100,100,150);
	line(100,150,150,100);
	line(150,100,100,50);
	line(50,100,150,100);
	line(100,50,100,150);
	line(75,50,75,150);
	line(125,50,125,150);
	line(50,75,150,75);
	line(50,125,150,125);
}
void main(){
	int gd=DETECT,gm,x_c,y_c,r;
	int i;
	char ch='y';
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	cleardevice();
	while(ch=='y'){
		printf("Choose what you want to draw:\n");
		printf("1.Circle\n2.Ellipse\n3.Arc\n4.Pieslice\n5.Baghchal Board\nEnter yout choice:");
		scanf("%d",&i);
		clrscr();
		cleardevice();
		switch(i){
			case 1:
				circle(100,100,50);
				break;
			case 2:
				ellipse(200,100,0,360,100,50);
				break;
			case 3:
				arc(100,100,200,300,40);
				break;
			case 4:
				pieslice(200,200,300,600,40);
				break;
			case 5:
				bagh();
				break;
			default:
				printf("Wrong Selection");
				break;
			}
		  printf("\nDo you want to continue(y/n)?");
		  scanf(" %c",&ch);
	}
	getch();
	closegraph();
}