#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
char car[6][9] = {{'+', ' ', '-', ' ', '+', ' ', '-', ' ', '+'},
                  {' ', '+', '-', '+', '-', '+', '-', '+', ' '},
                  {' ', '+', '-', '+', '-', '+', '-', '+', ' '},
                  {' ', '+', '-', '+', '-', '+', '-', '+', ' '},
                  {' ', '+', '-', '+', '-', '+', '-', '+', ' '},
                  {'+', ' ', '-', ' ', '+', ' ', '-', ' ', '+'}};
int x, y, height, width, gameOver;
enum direction
{
    LEFT,
    RIGHT,
    UP,
    DOWN,
    STOP
};
direction M = STOP;
void setup()
{
    height = 30;
    width = 100;
    x = (width / 2) - 4;
    y = (height)-6;
    gameOver = 0;
}
void draw()
{
    cout << endl
         << endl;
    for (int i = 0; i <= height; i++)
    {
        cout << "\t\t\t";
        for (int j = 0; j <= width; j++)
        {
            if (i == 0 || j == 0 || i == height || j == width)
            {
                cout << "#";
            }
            else if (i >= y && i < (y + 6) && j >= x && j < (x + 9))
            {
                cout << car[i - y][j - x];
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void input()
{
    if(_kbhit()){
        switch (_getch())
        {
        case 'w':
            y--;
            break;
        case 's':
            y++;
            break;
        case 'a':
            x--;
            break;
        case 'd':
            x++;
            break;
        default:
            break;
        }
    }
}
void logic()
{
}
int main()
{
    setup();
    while (!gameOver)
    {
        draw();
        input();
        logic();
        Sleep(20);
        system("cls");
    }
    return 0;
}