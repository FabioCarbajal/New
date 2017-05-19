#ifndef VEHICULO_H
#define VEHICULO_H
#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;



class Vehiculo
{
    protected:
        string license;
        int year;
    public:
        Vehiculo(const string &mylicense, const int myyear):license(mylicense),year(myyear){}
        const string getDesc() const {return license + "from";}
        const string &getlicense() const {return license;}
        const int getyear() const {return year;}
};

#endif // VEHICULO_H
