#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "Shape.h"
#include "../ShapesVisitors/ShapesVisitor.h"

class Rectangle : public Shape {
    int _width;
    int _height;

public:
    explicit Rectangle(int width, int height) : _width(width), _height(height) {}
    virtual void Accept(ShapesVisitor* v) override { v->Visit(this); }
    int Area() const { return _width * _height; }

};

#endif