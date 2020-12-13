#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(void){
	int x,y,gd = DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	x=getmaxx()/2;
	y=getmaxy()/2;
	outtextxy(x-100,50,"Eclippse using Graphics In C");
	ellipse(x,y,0,360,160,80);
	getch();
	closegraph();
	return 0;
}