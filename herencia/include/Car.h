#ifndef CAR_H
#define CAR_H
#include <iostream>
#include "Vehiculo.h"

using namespace std;


class Car:public Vehiculo{
    string style;
public:
    Car(const string &mylicense, const int myyear, const string &mystyle):Vehiculo(mylicense,myyear),style(mystyle){}
    const string &getstyle() {return style;}
    const string getDesc() const {return license + "from";}
        const string &getlicense() const {return license;}
        const int getyear() const {return year;}
};


#endif // CAR_H
