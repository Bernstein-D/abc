#ifndef RECT2_H
#define RECT2_H

#include <string>
using namespace std;
class Rectangle {
public:
    Rectangle(int length = 0, int width = 0, const string& fill = "");
    ~Rectangle();
    int getLength() const;
    int getWidth() const;
    string fill() const;
    void setLength(int length);
    void setWidth(int width);
    void display() const;
    int perimeter() const;
    static int howMany();
private:
    int length;
    int width;
    string fillString;
    static int thisMany;
};

#endif