#include<graphics.h>
#include<stdio.h>

int main()
{
	initwindow(500,500,"The Window");
	
	//creating circle
	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLUE);
	circle(250,250,50);
	floodfill(250,250, BLUE);
	
	getch();
} 
