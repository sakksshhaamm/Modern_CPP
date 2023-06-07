#include "point.h"

int main() {
Point p1(1, 2);
Point p2(3, 4);

Point p3 = p1 + p2;

std::cout << p3 << std::endl;

++p1;

std::cout << p1 << std::endl;

return 0;
}