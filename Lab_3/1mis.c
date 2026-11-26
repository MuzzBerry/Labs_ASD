#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    int leftMin = 0, leftMax = 79;
    int topMin = 0, topMax = 23;
    char symbol = '*';
    int delay = 10;
    int s, row, col;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    system("cls");
    for (s = leftMax + topMax; s >= 0; s--)
    {
        if (s % 2 == 1)
        {
            for (row = topMin; row <= topMax; row++)
            {
                col = s - row;
                if (col >= leftMin && col <= leftMax)
                {
                    pos.X = col;
                    pos.Y = row;
                    SetConsoleCursorPosition(h, pos);
                    printf("%c", symbol);
                    Sleep(delay);
                }
            }
        }
        else {
            for (row = topMax; row >= topMin; row--)
            {
                col = s - row;
                if (col >= leftMin && col <= leftMax)
                {
                    pos.X = col;
                    pos.Y = row;
                    SetConsoleCursorPosition(h, pos);
                    printf("%c", symbol);
                    Sleep(delay);
                }
            }
        }
    }
    getchar();
    return 0;
}