#include "Point.hpp"
#include <iostream>

int main(void)
{
    Point a(0, 0);
    Point b(10, 0);
    Point c(0, 10);

    Point p1(2, 2);
    Point p2(10, 10);
    Point p3(8, 2);
	Point p4(8, 1.99f);

    std::cout << "p1 is in triangle: " << (bsp(a, b, c, p1) == 1 ? "True" : "False") << std::endl;
    std::cout << "p2 is in triangle: " << (bsp(a, b, c, p2) == 1 ? "True" : "False") << std::endl;
    std::cout << "p3 is in triangle: " << (bsp(a, b, c, p3) == 1 ? "True" : "False") << std::endl;
    std::cout << "p4 is in triangle: " << (bsp(a, b, c, p4) == 1 ? "True" : "False") << std::endl;

    return 0;
}