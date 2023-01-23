#include<iostream>
//Header files of cpp graphics
#include<graphics.h>
using namespace std;
int main()
{
    // setcolor(BLACK); //use to change pencolor
    // setfillstyle(SOLID_FILL,WHITE);
    // floodfill(100,100,BLACK);
    
    //background
    initwindow(1500,750);

    //base
    rectangle(400,500,1000,400);

    //roof
    line(400,400,525,275);
    line(1000,400,875,275);
    line(525,275,875,275);

    //window
    rectangle(530,290,690,380);
    rectangle(710,290,870,380);

    //tyre
    circle(550,500,50);
    circle(850,500,50);


    //detailing in tyre
    //tyre 1
    line(550,550,550,450);
    line(550+36.36,550-85.36,550+36.36-70.7,550-85.36+70.7);
    line(550-36.36,550-85.36,550-36.36+70.7,550-85.36+70.7);
    //tyre 2
    line(850,550,850,450);
    line(850+36.36,550-85.36,850+36.36-70.7,550-85.36+70.7);
    line(850-36.36,550-85.36,850-36.36+70.7,550-85.36+70.7);
    
    //to hold screen
    getch();

    //to close graph
    closegraph();
    return 0;
}