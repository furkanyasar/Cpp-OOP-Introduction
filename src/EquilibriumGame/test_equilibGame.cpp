#include"equilibGame.h"
#include<iostream>
#include<time.h>
#include<string>
using namespace std;

int main(){

    others r1;
    others r2;

    Furkan blueBox;

    blueBox.distance();
    r1.distance();
    r2.distance();

    for(int i = 0 ; i<25; i++){
        r1.redCircle();
        r2.redCircle();
        blueBox.goEquilibriumPoint(r1.getPosX(),r1.getPosY(),r2.getPosX(), r2.getPosY());

        blueBox.distance();
        r1.distance();
        r2.distance();

        cout<<"-------------------\tStep: "<<i+1<<"\t-------------------"<<endl;
        cout<<"-----------------------------------------------------------"<<endl;
        cout<<"List: \tr1: ("<<r1.dispX()<<","<<r1.dispY()<<")\tr2: ("<<r2.dispX()<<","<<r2.dispY()<<")\tblue: ("<<blueBox.dispX()<<","<<blueBox.dispY()<<")"<<endl;
        cout<<"redCircle1:\t"<<r1.distance()<<"\tredCircle2:\t"<<r2.distance()<<endl;
        
    }

    return 0;

}