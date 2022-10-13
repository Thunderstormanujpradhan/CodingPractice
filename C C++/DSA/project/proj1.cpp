// Simple Snake Game
#include <iostream>
#include <conio.h>
#include <time.h>
#include <windows.h>
using namespace std;
bool GameOver;
const int width = 20;
const int height = 20;
const int FPS = 30;
int x, y, FruitX, FruitY, score;
int tailX[100], tailY[100], ntail;
const char SNAKE_PART = 'O';
enum eDirection
{
    STOP = 0,
    UP,
    DOWN,
    LEFT,
    RIGHT
};
eDirection dir;
void setup()
{    
    system("cls");
    srand(time(NULL));
    GameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    FruitX = rand() % (width - 2) + 1;
    FruitY = rand() % (height - 2) + 1;
    cout("\e[?25l");
}
void draw()
{
    cout("\033[%d;%dH", 1, 1);
    for (int i = 0; i < width; i++)
    {
        cout << "#";
    }
    cout << endl;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0 || j == width - 1)
            {
                cout << "#";
            }
            else if (i == y && j == x)
            {
                cout << SNAKE_PART;
            }
            else if (i == FruitY && j == FruitX)
            {
                cout << "*";
            }
            else
            {
                bool containsTail = false;
                for (int k = 0; k < ntail; k++)
                {
                    if (i == tailY[k] && j == tailX[k])
                    {
                        cout << SNAKE_PART;
                        containsTail = true;
                        break;
                    }
                }
                if (!containsTail)
                    cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < width; i++)
    {
        cout << "#";
    }
    cout << endl;
    cout << endl;
    cout << "Score : " << score << endl;
}
void input()
{
    if (kbhit())
    {
        switch (getch())
        {
        case 'w':
            if (dir != DOWN)
                dir = UP;
            break;
        case 'a':
            if (dir != RIGHT)
                dir = LEFT;
            break;
        case 's':
            if (dir != UP)
                dir = DOWN;
            break;
        case 'd':
            if (dir != LEFT)
                dir = RIGHT;
            break;
        default:
            break;
        }
    }
}
void logic()
{
    // int prevX = tailX[0];
    // int prevY = tailY[0];
    // tailX[0] = x;
    // tailY[0] = y;
    // int prev2X, prev2Y;
    // for (int i = 0; i < ntail; i++)
    // {
    //     prev2X = tailX[i];
    //     prev2Y = tailY[i];
    //     tailX[i] = prevX;
    //     tailY[i] = prevY;
    //     prevX = prev2X;
    //     prevY = prev2Y;
    // }

    for (int i = ntail - 1; i > 0; i--)
    {
        tailX[i] = tailX[i - 1];
        tailY[i] = tailY[i - 1];
    }
    tailX[0] = x;
    tailY[0] = y;

    switch (dir)
    {
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    default:
        break;
    }
    if (x < 0 || x > width || y < 0 || y > height)
        GameOver = true;

    for (int i = 0; i < ntail; i++)
    {
        if (x == tailX[i] && y == tailY[i])
            GameOver = true;
    }

    if (x == FruitX && y == FruitY)
    {
        score = score + 10;
        FruitX = rand() % (width - 2) + 1;
        FruitY = rand() % (height - 2) + 1;
        ntail++;
    }
}
int main()
{
    setup();
    while (!GameOver)
    {
        draw();
        input();
        logic();
        Sleep(1000 / FPS);
    }
    cout << "Game Over!\n";
    cout << "\e[?25h";
}
