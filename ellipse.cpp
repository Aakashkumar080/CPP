#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\DEVCPP\\BGI");
	long x,y,xc,yc,asq,bsq,fx,fy,a,b,d,temp1,temp2;
	printf("Enter coordinates x and y::");
	scanf("%ld%ld",&xc,&yc);
	printf("enter constants a and b::");
	scanf("%ld%ld",&a,&b);
	x=0;
	y=b;
	asq=a*a;
	bsq=b*b;
	fx=2*bsq*x;
	fy=2*asq*y;
	d=bsq-(asq*b)+(asq*0.25);
	do
	{
		putpixel(xc+x,yc+y,15);
		putpixel (xc-x,yc-y,15);
		putpixel(xc+x,yc-y,15);
		putpixel (xc-x,yc+y,15);
		
		if(d<0)
		 d=d+fx+bsq;
		 else
		 {
		 	
		 	y=y-1;
		 	d=d+fx-fy+bsq;
		 	fy=fy-(2*asq);
		 	
		 	
		 }
	x=x+1;
	fx=fx+(2*bsq);
		
	}
	while(fx<fy);
	temp1=(x+0.5)*(x+0.5);
	temp2=(y-1)*(y-1);
	d=bsq*temp1+asq*temp2-(asq*bsq);
	do
	{
		putpixel(xc+x,yc+y,15);
		putpixel(xc-x,yc-y,15);
		putpixel(xc+x,yc-y,15);
		putpixel(xc-x,yc+y,15);
		
		if(d>=0)
		d-d-fy+asq;
		else
		{
			x=x+1;
			d=d+fx-fy+asq;
			fx=fx+(2*bsq);
			
		}
		y=y-1;
		fy=fy-(2*asq);
		
	}
	while(y>0);
	getch();
	closegraph();
}
