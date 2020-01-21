#include <iostream>

#include <cmath>

#include <iomanip>

using namespace std;

class Point {
    static int counter;
    double x, y, z;
public:

    static void zeroCounter();

    Point();

    Point(const double, const double = 0.0, const double = 0.0);

    double getZ();

    void setZ(const double z);

    double getDistance(const Point &);

    void print();

    void load(istream &);

    void save(ostream &);
};

int Point::counter = 0;

void Point::zeroCounter() {
    counter = 0;
}

Point::Point() : x{0.0}, y{0.0}, z{0.0} {
    counter++;
}

Point::Point(const double x, const double y, const double z) : x{x}, y{y}, z{z} {
    counter++;
}

double Point::getZ() { return z; }

void Point::setZ(const double z) {
    this->z = z;
}

double Point::getDistance(const Point &otherPoint) {
    return sqrt((x - otherPoint.x) * (x - otherPoint.x) +
                (y - otherPoint.y) * (y - otherPoint.y) +
                (z - otherPoint.z) * (z - otherPoint.z));
}

void Point::print() {
    cout << "Point[" << this << "]"
         << "(" << x << ", "
         << y << ", "
         << z << ")" << endl;
}

void Point::load(istream &inputStream) {
    char unused[256];
    inputStream.get(unused, 256, '[');
    inputStream.get();
    inputStream >> x;
    inputStream.get(unused, 256, ';');
    inputStream.get();
    inputStream >> y;
    inputStream.get(unused, 256, ';');
    inputStream.get();
    inputStream >> z;
    inputStream.get(unused, 256, ']');
    inputStream.get();
}

void Point::save(ostream &outputStream) {
    outputStream << setprecision(3) << "["
                 << x << "; "
                 << y << "; "
                 << z << "]" << endl;
}

int main() {
    Point a;
    Point b(2.0, 3.0, 4.0);
    Point c(5.0);
    a.print();
    b.print();
    b.setZ(10.0);
    b.getZ();
    c.print();
    Point::zeroCounter();
    cout << b.getDistance(c) << endl;
    Point d;
    d.load(cin);
    d.save(cout);
    return 0;
}