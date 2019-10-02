#include "point.hpp"
#include <cmath>    // sqrt

using namespace std;

namespace hax {
    Point::Point(float x_, float y_) :x(x_), y(y_) {}

    float Point::magnitude() const noexcept
    {
        return sqrt(x*x + y*y);
    }

    Point operator-(const Point& lhs, const Point& rhs)
    {
        return Point{lhs.x-rhs.x, lhs.y-rhs.y};
    }

    ostream& operator<<(ostream& out, const Point& p)
    {
        out << "{" << p.x << ", " << p.y << "}";
        return out;
    }
}
