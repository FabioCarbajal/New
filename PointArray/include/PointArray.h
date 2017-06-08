#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "Point.h"

class PointArray
{
    private:
        Point *puntos;
        int lenght;
        void relenght(int lenght);
    public:
        PointArray();
        PointArray(Point pts[], const int lenght);
        PointArray(const PointArray &pv);
        ~PointArray();

        void clear();
        int getlenght() const {return lenght;}
        void push_back(const Point &p);
        void insert(const int position, const Point &p);
        void remove(const int position);
        Point *get(const int position);
        const Point *get(const int position) const;
};

#endif // POINTARRAY_H
