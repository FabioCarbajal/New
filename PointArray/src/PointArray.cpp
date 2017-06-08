#include "PointArray.h"

PointArray::PointArray()
{
    this->lenght=0;
    puntos=new Point[lenght];
}

PointArray::PointArray(Point ptscopia[], const int copialenght)
{
    this->lenght=lenght;
    puntos=new Point[copialenght];
    for(int i=0;i<lenght;++i)
    {
        puntos[i]=ptscopia[i];
    }
}

PointArray::PointArray(const PointArray &pv)
{
    this->lenght=pv.lenght;
    this->puntos=pv.puntos;
}

PointArray::~PointArray()
{
    delete[] puntos;
}

void PointArray::relenght(int nuevolenght)
{
    Point *pts= new Point[nuevolenght];
    int minlenght=(nuevolenght>lenght?lenght:nuevolenght);
    for(int i=0;i<minlenght;i++)
        pts[i]=puntos[i];
    delete[] puntos;
    lenght=nuevolenght;
    puntos=pts;
}

void PointArray::clear()
{
    relenght(0);
}

void PointArray::push_back(const Point &p)
{
    relenght(lenght+1);
    puntos[lenght-1]=p;
}

void PointArray::insert(const int position, const Point &p)
{
    relenght(lenght+1);
    for(int i=lenght-1;i>position;i--)
    {
        puntos[i]=puntos[i-1];
    }
    puntos[position]=p;
}

void PointArray::remove(const int position)
{
    if(position >= 0 && position<lenght)
    {
        for(int i=position;i<lenght-2;i++)
        {
            puntos[i]=puntos[i+1];
        }
        relenght(lenght-1);
    }
}

Point *PointArray::get(const int position)
{
    return position >=0 && position<lenght ? puntos + position:NULL;
}

const Point *PointArray::get(const int position) const
{
    return position >= 0 && position<lenght?puntos+position:;
}









