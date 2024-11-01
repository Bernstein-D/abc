#include "rect2.h"
#include <iostream>
using namespace std;

int Rectangle::thisMany = 0;

Rectangle::Rectangle(int length, int width, const string& fill)
    : length(length), width(width), fillString(fill) {
    ++thisMany;
}

Rectangle::~Rectangle() {
    --thisMany;
}

int Rectangle::getLength() const {
    return this->length;
}

int Rectangle::getWidth() const {
    return this->width;
}

string Rectangle::fill() const {
    return this->fillString;
}

void Rectangle::setLength(int length) {
    this->length = length;
}

void Rectangle::setWidth(int width) {
    this->width = width;
}

int Rectangle::perimeter() const {
    return 2 * (this->length + this->width);
}

void Rectangle::display() const {
    cout << "Length: " << length << ", Width: " << width << ", Fill: " << fillString;
}

int Rectangle::howMany() {
    return thisMany;
}