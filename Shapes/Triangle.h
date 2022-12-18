#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

#include "Shape.h"
#include "../ShapesVisitors/ShapesVisitor.h"

class Triangle : public Shape {
    int _height;
    int _base;

public:
    explicit Triangle(int height, int base) : _height(height), _base(base) {}
    virtual void Accept(ShapesVisitor* v) override { v->Visit(this); }
    float Area() const { return 0.5 * _height * _base; }

};

#endif