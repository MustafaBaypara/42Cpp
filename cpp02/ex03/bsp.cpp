#include "Point.hpp"

static Fixed area(Point const &x, Point const &y, Point const &z)
{
	// Area: |(x1(y2-y3) + x2(y3-y1) + x3(y1-y2)) / 2
    float val = (x.getX().toFloat() * (y.getY().toFloat() - z.getY().toFloat())) +
                (y.getX().toFloat() * (z.getY().toFloat() - x.getY().toFloat())) +
                (z.getX().toFloat() * (x.getY().toFloat() - y.getY().toFloat()));

    return Fixed(std::abs(val) / 2.0f); // absolute value
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed _area = area(a, b, c);
    Fixed pab = area(point, a, b);
    Fixed pbc = area(point, b, c);
    Fixed pca = area(point, c, a);

    return (pab + pbc + pca == _area) &&
           (pab > 0 && pbc > 0 && pca > 0);
}

