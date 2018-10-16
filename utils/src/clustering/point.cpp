#include "point.h"
#include <cmath>

Point::Point(const float &X, const float &Y)
: X(X), Y(Y) {}

float Point::distance(const Point &other)
{
    // calculate L2 norm squared of (this - other)
    return pow(this->X - other.X, 2) + pow(this->Y - other.Y, 2);
}