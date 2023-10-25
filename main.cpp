#include <iostream>
#include <conio.h>
//#include <windows.h>

using namespace std;

const int width = 80;
const int height = 20;

//decalring some global variables for this project

int x,y;

int foodX, foodY;

int score;

int snakeTailX[50], snakeTailY[50];

int snakeLen;

enum snakeDirection
{
    STOP = 0,LEFT,RIGHT,UP,DOWN
};

snakeDirection sDir;

bool isGameOver;

//initialising some game variables

void GameInit (void)
{
    isGameOver = false;
    sDir = STOP;
    x = height/2;
    y = width/2;
    foodX = rand() & width;   //so this will basically generate a randome coordinate for 
    foodY = rand() & height;  //the fruit, and % will make sure that it lands withing the area given by height and width
}


//craeting a function which will render the game and end it when game is over

void GameRender(string playerName)
{
    system("cls");  //this will clear the console


    //rendor the top walls

    for(int i=0;i<width+2;i++)
    {
        cout<<"-";
    }
    cout<<endl;


    //now to create the side walls which will be repeated height number of times

    for(int i=0;i<height;i++)
    {
        for(int j =0;j<=width;j++)
        {
            if(j == 0 || j == width)
            {
                cout<<"|";
            }
            //creation of the snakes head
            if(j == y && j == x)
            {
                cout<<"O";
            }
            else if(i == foodY && j == foodX)
            {
                cout<<"@";
            }
            else
            {
                bool prTail = false;
                for(int k = 0;k<snakeLen;k++)
                {
                    if(snakeTailX[k] == j && snakeTailY[k] == i)
                    {
                        cout<<"o";
                        prTail = true;
                    }
                }
                if (!prTail)
                cout<<" ";
            }
        }
    }
    cout<<endl;

//now to create the bottom walls
for(int i =0;i<width+2;i++)
{
    cout<<"-";
}
cout<<endl;

//and now displaying the score 
cout<<"score for "<<playerName<<" is "<<score<<endl;

}