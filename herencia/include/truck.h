#ifndef TRUCK_H
#define TRUCK_H


class truck:public Vehiculo
{
    int carga;
    public:
        truck(const string &mylicense,const int myyear, const int mycarga):Vehiculo(mylicense,myyear),carga(mycarga);
};

#endif // TRUCK_H
