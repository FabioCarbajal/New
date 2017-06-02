#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "Point.h"

class PointArray
{
    private:
        Point *puntero;
        int lenght;
    public:
        PointArray();
        PointArray(Point points[], const int lenght);
        PointArray(const PointArray &pv);
        ~PointArray();
        void relenght(int n);
        void push_back(const int &puntero);
        void insert(const int position, const Point &puntero);
        void remove(const int pos);
        const int getlenght();
        void clear();
        Point get(const int position);
        const Point get(const int position) const;
};

#endif // POINTARRAY_H
