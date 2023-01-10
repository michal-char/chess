#include "randomizer.h"
void randomizer(char board[8][8])
{
    char figure = ' ';
    for (int i = 0; i < 4; i++)
    {
        switch (i)
        {
        case 0:
            figure = 'p';
            break;
        case 1:
            figure = 'n';
            break;
        case 2:
            figure = 'r';
            break;
        case 3:
            figure = 'k';
            break;
        }
        bool assigned = false;
        while (!assigned)
        {
            int x = rand() % 8;
            int y = rand() % 8;
            if (board[x][y] == ' ')
            {
                board[x][y] = figure;
                assigned = true;
            }
            else
            {
                continue;
            }
        }
    }
}