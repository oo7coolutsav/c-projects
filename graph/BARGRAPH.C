#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(void){
	int gd= DETECT,gm,x,y;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	x=getmaxx()/2;
	y=getmaxy()/2;
	settextstyle(BOLD_FONT,HORIZ_DIR,2);
	outtextxy(x-280,10,"Bar Graph Using WimBGI Graphics");
	line(80,80,80,420);   //vertical line (X axis)
	line(70,410,580,410);  //Horizontal line (Y axis)
	settextstyle(3,0,2);
	outtextxy(50,420,"0");
	settextstyle(3,1,2);
	outtextxy(65,78,">");
	outtextxy(40,180,"Y- Axis ->");
	settextstyle(3,0,2);
	outtextxy(569,395,">");
	outtextxy(250,430,"X- Axis ->");
	setfillstyle(XHATCH_FILL,GREEN);
	bar(110,190,140,410);
	bar(170,250,200,410);
	bar(230,170,260,410);
	bar(290,370,320,410);
	bar(350,340,380,410);
	bar(410,320,440,410);
	bar(470,268,500,410);
	bar(530,390,560,410);
	getch();
	closegraph();
	return 0;
}