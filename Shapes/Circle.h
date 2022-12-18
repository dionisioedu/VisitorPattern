#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include "Shape.h"
#include "../ShapesVisitors/ShapesVisitor.h"

class Circle : public Shape {
    float _radius;
    const float PI = 3.14159f;

public:
    explicit Circle(float radius) : _radius(radius) {}
    virtual void Accept(ShapesVisitor* v) override { v->Visit(this); }
    float Area() const { return PI * _radius * _radius; }

};

#endif