#include <iostream>
using namespace std;

class Point{
public:
    int x_;
    int y_;

    Point(int x, int y);
    Point& operator=(const Point& other);

    //Getters
    int getX();
    int getY();

    //Setters
    void setX(int x);
    void setY(int y);
};

Point::Point(int x, int y) {
    x_ = x;
    y_ = y;
}

//Getters
int Point::getX() {
    return x_;
}

int Point::getY() {
    return y_;
}

//Setters
void Point::setX(int x){
    x_ = x;
}

void Point::setY(int y){
    y_ = y;
}



Point& Point::operator=(const Point& other) {
    x_ = other.x_;
    y_ = other.y_;
    return *this;
}

int main(){
    Point p1(10, 20);
    Point p2(1, 2);

    cout << "Valor de p1 [X]: " << p1.getX() <<endl <<
    "Valor de p1 [Y]: " << p1.getY() <<endl;
    
    p1 = p2;

    cout << "Valor de p1 [X]: " << p1.getX() <<endl <<
    "Valor de p1 [Y]: " << p1.getY() <<endl;

}