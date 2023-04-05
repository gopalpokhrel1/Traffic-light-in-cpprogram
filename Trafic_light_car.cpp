#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	initwindow(1200,700);//screen window
	int i;
    for(i=0; i<400; i++)
    {
    	setfillstyle(1,GREEN);
    	circle(900,250,25);
    	floodfill(900,250, WHITE);
    	circle(900,200,25);
    	circle(900,150,25);
    	
    	line(900,275,900, 500);//t.l
    	line(770,490, 770, 500);
        line(0,500, 1200,500); //road
	    circle(70+i,475,25);//back tyre
	    arc(70+i,475,0,180, 30);//back arc
	    circle(200+i,475,25);//front tyre
	    arc(200+i,475,0,180,30);//front arc
	    line(40+i, 475, 5+i, 475);//back bottom
	    line(5+i,475, 5+i, 430);//back mid
	    line(5+i,430, 40+i, 430);//back mid top
	    line(40+i, 430, 40+i,380);//back top side
	    line(100+i, 475, 170+i,475);//mid bottom
	    line(230+i, 475, 265+i,475);//front bottom
	    line(265+i,475, 265+i,430);//front mid
	    line(265+i,430,230+i,430);//front mid top
	    line(230+i, 430, 230+i,380);//front top
	    line(40+i,380, 230+i,380);//top
	    delay(10);
	    cleardevice();
	}
	  for(i=400; i<500; i++)
    {
    	
    	circle(900,250,25);
    	circle(900,200,25);
    	setfillstyle(1,RED);
    	circle(900,150,25);
    	floodfill(900,150, 15);
    	line(900,275,900, 500);//t.l
    	line(770,490, 770, 500);
        line(0,500, 1200,500); //road
	    circle(70+i,475,25);//back tyre
	    arc(70+i,475,0,180, 30);//back arc
	    circle(200+i,475,25);//front tyre
	    arc(200+i,475,0,180,30);//front arc
	    line(40+i, 475, 5+i, 475);//back bottom
	    line(5+i,475, 5+i, 430);//back mid
	    line(5+i,430, 40+i, 430);//back mid top
	    line(40+i, 430, 40+i,380);//back top side
	    line(100+i, 475, 170+i,475);//mid bottom
	    line(230+i, 475, 265+i,475);//front bottom
	    line(265+i,475, 265+i,430);//front mid
	    line(265+i,430,230+i,430);//front mid top
	    line(230+i, 430, 230+i,380);//front top
	    line(40+i,380, 230+i,380);//top
	    delay(10);
	    cleardevice();
	}
	  for(i=500; i<501; i++)
    {
    	
    	circle(900,250,25);
    	circle(900,200,25);
    	setfillstyle(1,RED);
    	circle(900,150,25);
    	floodfill(900,150, 15);
    	line(900,275,900, 500);//t.l
    	line(770,490, 770, 500);
        line(0,500, 1200,500); //road
	    circle(70+i,475,25);//back tyre
	    arc(70+i,475,0,180, 30);//back arc
	    circle(200+i,475,25);//front tyre
	    arc(200+i,475,0,180,30);//front arc
	    line(40+i, 475, 5+i, 475);//back bottom
	    line(5+i,475, 5+i, 430);//back mid
	    line(5+i,430, 40+i, 430);//back mid top
	    line(40+i, 430, 40+i,380);//back top side
	    line(100+i, 475, 170+i,475);//mid bottom
	    line(230+i, 475, 265+i,475);//front bottom
	    line(265+i,475, 265+i,430);//front mid
	    line(265+i,430,230+i,430);//front mid top
	    line(230+i, 430, 230+i,380);//front top
	    line(40+i,380, 230+i,380);//top
	    delay(4000);
	    cleardevice();
	}
		  for(i=501; i<502; i++)
    {
    	
    	circle(900,250,25);
    	setfillstyle(1,YELLOW);
    	circle(900,200,25);
    	floodfill(900,200, 15);
    	circle(900,150,25);
    	line(900,275,900, 500);//t.l
    	line(770,490, 770, 500);
        line(0,500, 1200,500); //road
	    circle(70+i,475,25);//back tyre
	    arc(70+i,475,0,180, 30);//back arc
	    circle(200+i,475,25);//front tyre
	    arc(200+i,475,0,180,30);//front arc
	    line(40+i, 475, 5+i, 475);//back bottom
	    line(5+i,475, 5+i, 430);//back mid
	    line(5+i,430, 40+i, 430);//back mid top
	    line(40+i, 430, 40+i,380);//back top side
	    line(100+i, 475, 170+i,475);//mid bottom
	    line(230+i, 475, 265+i,475);//front bottom
	    line(265+i,475, 265+i,430);//front mid
	    line(265+i,430,230+i,430);//front mid top
	    line(230+i, 430, 230+i,380);//front top
	    line(40+i,380, 230+i,380);//top
	    delay(4000);
	    cleardevice();
	}
	  for(i=502; i<1200; i++)
    {
    	setfillstyle(1,GREEN);
    	circle(900,250,25);
    	floodfill(900,250, 15);
    	circle(900,200,25);
    	circle(900,150,25);
    	line(900,275,900, 500);//t.l
    	line(770,490, 770, 500);
        line(0,500, 1200,500); //road
	    circle(70+i,475,25);//back tyre
	    arc(70+i,475,0,180, 30);//back arc
	    circle(200+i,475,25);//front tyre
	    arc(200+i,475,0,180,30);//front arc
	    line(40+i, 475, 5+i, 475);//back bottom
	    line(5+i,475, 5+i, 430);//back mid
	    line(5+i,430, 40+i, 430);//back mid top
	    line(40+i, 430, 40+i,380);//back top side
	    line(100+i, 475, 170+i,475);//mid bottom
	    line(230+i, 475, 265+i,475);//front bottom
	    line(265+i,475, 265+i,430);//front mid
	    line(265+i,430,230+i,430);//front mid top
	    line(230+i, 430, 230+i,380);//front top
	    line(40+i,380, 230+i,380);//top
	    delay(10);
	    cleardevice();
	}
	
}
