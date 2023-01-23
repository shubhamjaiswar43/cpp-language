#include <iostream>
#include <windows.h>
#include <graphics.h>
using namespace std;
void car(int x, int y)
{
    // base
    rectangle(x-300, y+100, x+300, y);

    // roof
    line(x-175, y-125, x+175, y-125);
    line(x-300, y, x-175, y-125);
    line(x+300, y, x+175, y-125);

    // window
    rectangle(x-170, y-110, x-10, y-20);
    rectangle(x+10, y-110, x+170, y-20);

    // tyre
    circle(x-150, y+100, 50);
    circle(x+150, y+100, 50);

    line(x-150,y+150,x-150,y+50);
    line(x+150,y+150,x+150,y+50);
    // // detailing in tyre
    // // tyre 1
    // line(550, 550, 550, 450);
    // line(550 + 36.36, 550 - 85.36, 550 + 36.36 - 70.7, 550 - 85.36 + 70.7);
    // line(550 - 36.36, 550 - 85.36, 550 - 36.36 + 70.7, 550 - 85.36 + 70.7);
    // // tyre 2
    // line(850, 550, 850, 450);
    // line(850 + 36.36, 550 - 85.36, 850 + 36.36 - 70.7, 550 - 85.36 + 70.7);
    // line(850 - 36.36, 550 - 85.36, 850 - 36.36 + 70.7, 550 - 85.36 + 70.7);
}
int main()
{
    int x=0, y=400;
    initwindow(1500, 750);
    
    // circle(x,y,10);
    int i;
    for (i = 0; i < 1000; i++)
    {
        line(0,550,1500,550);
        car(x+i, y);
        delay(10);
        cleardevice();
    }
    car(x+i, y);
    getch();
    closegraph();
    return 0;
}