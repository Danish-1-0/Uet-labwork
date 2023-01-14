#include <iostream>
#include <Windows.h>
using namespace std;

void printMaze();
void gotoxy(int x, int y);
void erase(int x, int y);
void clear(int x, int y, char previous);
void printPacman(int x, int y);
char getCharAtxy(short int x, short int y);
void showGhost(int x, int y);
void moveghost(int gx, int gy, string direction, char previousChar);

main()
{
    int pacmanX = 1;
    int pacmanY = 1;
    int gx = 4;
    int gy = 4;
    int gx2 = 4;
    int gy2 = 1;

    bool gameRunning = true;

    system("cls");
    printMaze();
    showGhost(gx, gy);
    printPacman(pacmanX, pacmanY);
    string direction = "right";
    string ydirection = "down";
    char previousChar = ' ';
    char nextLocation;

    showGhost(gx, gy);
    showGhost(gx2, gy2);

    while (gameRunning)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation = getCharAtxy(pacmanX - 1, pacmanY);
            if (nextLocation == ' ')
            {
                erase(pacmanX, pacmanY);
                pacmanX = pacmanX - 1;
                printPacman(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextLocation = getCharAtxy(pacmanX + 1, pacmanY);
            if (nextLocation == ' ')
            {
                erase(pacmanX, pacmanY);
                pacmanX = pacmanX + 1;
                printPacman(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            char nextLocation = getCharAtxy(pacmanX, pacmanY - 1);
            if (nextLocation == ' ')
            {
                erase(pacmanX, pacmanY);
                pacmanY = pacmanY - 1;
                printPacman(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation = getCharAtxy(pacmanX, pacmanY + 1);
            if (nextLocation == ' ')
            {
                erase(pacmanX, pacmanY);
                pacmanY = pacmanY + 1;
                printPacman(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning = false;
        }
        Sleep(200);
        // moveghost(gx,gy,direction,previousChar);
        Sleep(200);
        if (direction == "right")
        {
            char nextLocation = getCharAtxy(gx + 1, gy);
            if (nextLocation == '%')

            {

                direction = "left";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                clear(gx, gy, previousChar);

                gx = gx + 1;
                previousChar = nextLocation;

                showGhost(gx, gy);
            }
        }
        if (direction == "left")
        {
            char nextLocation = getCharAtxy(gx - 1, gy);
            if (nextLocation == '%')

            {

                direction = "right";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                clear(gx, gy, previousChar);

                gx = gx - 1;
                previousChar = nextLocation;

                showGhost(gx, gy);
            }
        }
        if (ydirection == "up")
        {
            char nextLocation = getCharAtxy(gx2, gy2 - 1);
            if (nextLocation == '%')

            {

                ydirection = "down";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                clear(gx2, gy2, previousChar);

                gy2 = gy2 - 1;
                previousChar = nextLocation;

                showGhost(gx2, gy2);
            }
            
        }
        if (ydirection == "down")
            {
                char nextLocation = getCharAtxy(gx2, gy2 + 1);
                if (nextLocation == '%')

                {

                    ydirection = "up";
                }
                else if (nextLocation == ' ' || nextLocation == '.')
                {
                    clear(gx2, gy2, previousChar);

                    gy2 = gy2 + 1;
                    previousChar = nextLocation;

                    showGhost(gx2, gy2);
                }
            }
    }
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void clear(int x, int y, char previous)
{
    gotoxy(x, y);
    cout << previous;
}

void erase(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}

void printPacman(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
}

void printMaze()
{
    cout << "%%%%%%%%%%%%%%" << endl;
    cout << "%            %" << endl;
    cout << "%            %" << endl;
    cout << "%            %" << endl;
    cout << "%            %" << endl;
    cout << "%            %" << endl;
    cout << "%            %" << endl;
    cout << "%            %" << endl;
    cout << "%            %" << endl;
    cout << "%            %" << endl;
    cout << "%            %" << endl;
    cout << "%%%%%%%%%%%%%%" << endl;
}

void showGhost(int x, int y)
{
    gotoxy(x, y);
    cout << "G";
}

void moveghost(int gx, int gy, string direction, char previousChar)
{
    Sleep(200);
    if (direction == "right")
    {
        char nextLocation = getCharAtxy(gx + 1, gy);
        if (nextLocation == '%')

        {

            direction = "left";
        }
        else if (nextLocation == ' ' || nextLocation == '.')
        {
            clear(gx, gy, previousChar);

            gx = gx + 1;
            previousChar = nextLocation;

            showGhost(gx, gy);
        }
    }
    if (direction == "left")
    {
        char nextLocation = getCharAtxy(gx - 1, gy);
        if (nextLocation == '%')

        {

            direction = "right";
        }
        else if (nextLocation == ' ' || nextLocation == '.')
        {
            clear(gx, gy, previousChar);

            gx = gx - 1;
            previousChar = nextLocation;

            showGhost(gx, gy);
        }
    }
    if (direction == "up")
    {
        char nextLocation = getCharAtxy(gx, gy - 1);
        if (nextLocation == '%')

        {

            direction = "down";
        }
        else if (nextLocation == ' ' || nextLocation == '.')
        {
            clear(gx, gy, previousChar);

            gy = gy - 1;
            previousChar = nextLocation;

            showGhost(gx, gy);
        }
    }
    if (direction == "down")
    {
        char nextLocation = getCharAtxy(gx, gy + 1);
        if (nextLocation == '%')

        {

            direction = "up";
        }
        else if (nextLocation == ' ' || nextLocation == '.')
        {
            clear(gx, gy, previousChar);

            gy = gy + 1;
            previousChar = nextLocation;

            showGhost(gx, gy);
        }
    }
}
