//Creating Circle
#include <iostream>
#include <graphics.h>

int main()
{
    initwindow(400, 300, "First Sample");
    circle(100, 50, 40);
    while (!kbhit( ))
    {
        delay(200);
    }
}