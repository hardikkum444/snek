#include <iostream>
#include <conio.h>
//#include <windows.h>

using namespace std;

const int width = 80;
const int height = 20;

//decalring some global variables

int x,y;

int foodX, foodY;

int score;

int snakeTailX[50], snakeTailY[50];

// int main()
// {
//     cout<<"hi"<<endl;
// }
int snakeLen;

enum snakeDirection
{
    STOP = 0,LEFT,RIGHT,UP,DOWN
};

snakeDirection sDir;

bool isGameOver;

void regenerate();

void mainplay();

void render();

