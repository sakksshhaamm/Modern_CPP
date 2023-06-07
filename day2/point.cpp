#include "point.h"

Point::Point(int x, int y) : xCoordinate(x), yCoordinate(y) {}

Point::Point(const Point &other)
{
    xCoordinate = other.xCoordinate;
    yCoordinate = other.yCoordinate;
}

Point &Point::operator=(const Point &other)
{
    if (this != &other)
    {
        xCoordinate = other.xCoordinate;
        yCoordinate = other.yCoordinate;
    }

    return *this;
}

Point Point::operator+(const Point &other) const
{
    return Point(xCoordinate + other.xCoordinate, yCoordinate + other.yCoordinate);
}

Point Point::operator-(const Point &other) const
{
    return Point(xCoordinate - other.xCoordinate, yCoordinate - other.yCoordinate);
}

Point &Point::operator++()
{
    ++xCoordinate;
    ++yCoordinate;

    return *this;
}

Point Point::operator++(int)
{
    Point copy(*this);

    ++xCoordinate;
    ++yCoordinate;

    return copy;
}

std::ostream &operator<<(std::ostream &os, const Point &point)
{
    os << "(" << point.xCoordinate << ", " << point.yCoordinate << ")";

    return os;
}