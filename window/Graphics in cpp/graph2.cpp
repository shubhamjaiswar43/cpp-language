#include<iostream>
#include<graphics.h>
using namespace std;
//--------------------CHESS BOARD--------------------//

/*Color
BLACK       :0
BLUE        :1
GREEN       :2
CYAN        :3
RED         :4
MAGENTA     :5
BROWN       :6
LIGHTGRAY   :7
DARKGRAY    :8
LIGHTBLUE   :9
LIGHTGREEN  :10
LIGHTCYAN   :11
LIGHTRED    :12
LIGHTMAGENTA:13
YELLOW      :14
WHITE       :15
*/
int main()
{
    initwindow(1500,750);
    rectangle(390,15,1110,735);
    // getbkcolor(); use to get color code of bg
    setfillstyle(SOLID_FILL,14);
    floodfill(200,200,15);
    int count = 0;
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            count++;
            if(count%2==0){
                setfillstyle(SOLID_FILL,15);
                // setcolor(12);
                rectangle((390+(90*(i-1))),(15+(90*(j-1))),(390+(90*i)),(15+(90*j)));
                floodfill((390+(90*(i-1)))+1,(15+(90*(j-1)))+1,15);
            }
            else{
                // setcolor(12);
                rectangle((390+(90*(i-1))),(15+(90*(j-1))),(390+(90*i)),(15+(90*j)));
            }
            
        }
        count++;
        
    }
    
    // for (int i = 1; i <= 10; i++)
    // {
    //     line(10,75*i,1490,75*i);
    // }
    getch();
    closegraph();

    return 0;
}