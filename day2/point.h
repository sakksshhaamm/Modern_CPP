#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;
class Point
{
public:
    int xCoordinate;
    int yCoordinate;

    Point(int x = 0, int y = 0);
    Point(const Point &other);            // Copy constructor
    Point &operator=(const Point &other); // Assignment operator

    Point operator+(const Point &other) const;
    Point operator-(const Point &other) const;

    Point &operator++();   // Prefix increment operator
    Point operator++(int); // Postfix increment operator

    friend std::ostream &operator<<(std::ostream &os, const Point &point);

private:
    Point() = delete; // Default constructor is deleted
};

#endif // POINT_H
