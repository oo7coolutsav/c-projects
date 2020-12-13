#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(void){
	int gd = DETECT, gm,x,y;
	initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
	x=getmaxx()/2;
	y=getmaxy()/2;
	outtextxy(x-150,50,"Co-Centric Circles with Graphics Library");
	setcolor(RED);
	circle(x,y,30);
	setcolor(YELLOW);
	circle(x,y,50);
	setcolor(BLUE);
	circle(x,y,70);
	setcolor(GREEN);
	circle(x,y,90);
	setcolor(RED);
	circle(x,y,110);
	setcolor(YELLOW);
	circle(x,y,130);
	setcolor(BLUE);
	circle(x,y,150);
	setcolor(GREEN);
	circle(x,y,170);
	getch();
	closegraph();
	return 0;
}