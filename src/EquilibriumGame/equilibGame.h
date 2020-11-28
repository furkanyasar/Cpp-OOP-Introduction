#include<iostream>
//#include<iomanip>
#include<math.h>
#include<stdlib.h>

class Furkan{

    public:
        Furkan(){
            x=0;
            y=0;
        }
        void goEquilibriumPoint(int x1,int y1,int x2,int y2);
        void setPos(int x, int y);
        double distance();
        int dispX();
        int dispY();
    private:
        double x;
        double y;

};

class others{

    public:
        others (){
            x=0;
            y=0;
        };
        void redCircle();
        int getPosX();
        int getPosY();
        double distance();
        int dispX();
        int dispY();
    private:
        int x;
        int y;

};