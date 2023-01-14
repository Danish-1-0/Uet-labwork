#include <iostream>
#include <Windows.h>
using namespace std;

void printMaze(int score);
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
    int score = 0;

    bool gameRunning = true;

    system("cls");
    printMaze(score);
    showGhost(gx, gy);
    printPacman(pacmanX, pacmanY);
    string direction = "right";
    string ydirection = "down";
    char previousCharx = ' ';
    char previousChary = ' ';
    char nextLocationx;
    char nextLocationy;

    showGhost(gx, gy);
    showGhost(gx2, gy2);

    while (gameRunning)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation = getCharAtxy(pacmanX - 1, pacmanY);
            if (nextLocation == ' ' || nextLocation == '.')
            {
                if (nextLocation == '.')
                {
                    erase(pacmanX, pacmanY);
                    score = score + 10;
                    pacmanX = pacmanX - 1;
                    printPacman(pacmanX, pacmanY);
                    
                }
                else
                {
                    erase(pacmanX, pacmanY);
                    pacmanX = pacmanX - 1;
                    printPacman(pacmanX, pacmanY);
                }
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextLocation = getCharAtxy(pacmanX + 1, pacmanY);
            if (nextLocation == ' '|| nextLocation == '.')
            {
                if (nextLocation == '.')
                {
                    erase(pacmanX, pacmanY);
                    score = score + 10;
                    pacmanX = pacmanX + 1;
                    printPacman(pacmanX, pacmanY);
                    gotoxy(8,13);
                    cout << "Score: "<<score;
                }
                else
                {
                    erase(pacmanX, pacmanY);
                    pacmanX = pacmanX + 1;
                    printPacman(pacmanX, pacmanY);
                    
                }
            }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            char nextLocation = getCharAtxy(pacmanX, pacmanY - 1);
            if (nextLocation == ' '|| nextLocation == '.')
            {
                if (nextLocation == '.')
                {
                    erase(pacmanX, pacmanY);
                    score = score + 10;
                    pacmanY = pacmanY - 1;
                    printPacman(pacmanX, pacmanY);
                    gotoxy(8,13);
                    cout << "Score: "<<score;
                }
                else
                {
                    erase(pacmanX, pacmanY);
                    pacmanY = pacmanY - 1;
                    printPacman(pacmanX, pacmanY);
                }
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation = getCharAtxy(pacmanX, pacmanY + 1);
            if (nextLocation == ' '|| nextLocation == '.')
            {
                if (nextLocation == '.')
                {
                    erase(pacmanX, pacmanY);
                    score = score + 10;
                    pacmanY = pacmanY + 1;
                    printPacman(pacmanX, pacmanY);
                    gotoxy(8,13);
                    cout << "Score: "<<score;
                }
                else
                {
                    erase(pacmanX, pacmanY);
                    pacmanY = pacmanY + 1;
                    printPacman(pacmanX, pacmanY);
                }
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning = false;
        }
        
        // moveghost(gx,gy,direction,previousChar);


        Sleep(300);
        if (direction == "right")
        {
            char nextLocationx = getCharAtxy(gx + 1, gy);
            if (nextLocationx == '%')

            {

                direction = "left";
            }
            else if (nextLocationx == ' ' || nextLocationx == '.')
            {
                clear(gx, gy, previousCharx);

                gx = gx + 1;
                previousCharx = nextLocationx;

                showGhost(gx, gy);
            }
        }
        if (direction == "left")
        {
            char nextLocationx = getCharAtxy(gx - 1, gy);
            if (nextLocationx == '%')

            {

                direction = "right";
            }
            else if (nextLocationx == ' ' || nextLocationx == '.')
            {
                clear(gx, gy, previousCharx);

                gx = gx - 1;
                previousCharx = nextLocationx;

                showGhost(gx, gy);
            }
        }
        if (ydirection == "up")
        {
            char nextLocationy = getCharAtxy(gx2, gy2 - 1);
            if (nextLocationy == '%')

            {

                ydirection = "down";
            }
            else if (nextLocationy == ' ' || nextLocationy == '.')
            {
                clear(gx2, gy2, previousChary);

                gy2 = gy2 - 1;
                previousChary = nextLocationy;

                showGhost(gx2, gy2);
            }
        }
        if (ydirection == "down")
        {
            char nextLocationy = getCharAtxy(gx2, gy2 + 1);
            if (nextLocationy == '%')

            {

                ydirection = "up";
            }
            else if (nextLocationy == ' ' || nextLocationy == '.')
            {
                clear(gx2, gy2, previousChary);

                gy2 = gy2 + 1;
                previousChary = nextLocationy;

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

void printMaze(int score)
{
    cout << "%%%%%%%%%%%%%%" << endl;
    cout << "%      ....  %" << endl;
    cout << "%       ...  %" << endl;
    cout << "%     ...    %" << endl;
    cout << "%   ....     %" << endl;
    cout << "%      ....  %" << endl;
    cout << "% .....      %" << endl;
    cout << "%       .... %" << endl;
    cout << "%    ....    %" << endl;
    cout << "%            %" << endl;
    cout << "%    . ...   %" << endl;
    cout << "%%%%%%%%%%%%%%" << endl;
    gotoxy(8,13);
    cout << "Score: "<<score;
}

void showGhost(int x, int y)
{
    gotoxy(x, y);
    cout << "G";
}
