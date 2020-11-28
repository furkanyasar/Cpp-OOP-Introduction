#include"equilibGame.h"
#include<iostream>
#include<time.h>
#include<math.h>
#include<string>
using namespace std;

void Furkan::goEquilibriumPoint(int x1,int y1,int x2,int y2)
{

    int dengeX,dengeY;
    dengeX = x1 + x2;
    dengeY = y1 + y2;

    setPos((-1)*dengeX, (-1)*dengeY);

}

void Furkan::setPos(int x1, int y1)
{
    x = x1;
    y = y1;
}

double Furkan::distance()
{
    double tmp = 0;
    tmp = (x * x) + (y * y);
    tmp = sqrt(tmp);
    return tmp;
}
int Furkan::dispX()
{
     return x;
}
int Furkan::dispY()
{
     return y;
}

void others::redCircle(){
    int RandomX= (rand() % 9)-4;
    int RandomY= (rand() % 9)-4;
    if (-16 <= (x + RandomX) <= 16 && -16 <= (y + RandomY) <= 16)
    {
        x = x + RandomX;
        y = y + RandomY;
    }
    else 
    {
        redCircle();
    }
}

int others::getPosX()
{
    return x;
}

int others::getPosY()
{
    return y;
}

double others::distance(){
    double tmp = 0;
    tmp = (x * x) + (y * y);
    tmp = sqrt(tmp);
    return tmp;
}
int others::dispX()
{
    return x;
}
int others::dispY()
{
    return y;
}