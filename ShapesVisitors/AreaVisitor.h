#ifndef __AREA_VISITOR_H__
#define __AREA_VISITOR_H__

#include <iostream>

#include "ShapesVisitor.h"
#include "../Shapes/Circle.h"
#include "../Shapes/Rectangle.h"
#include "../Shapes/Triangle.h"

class AreaVisitor : public ShapesVisitor {

    virtual void Visit(Circle* circle) override { std::cout << "Area of circle : " << circle->Area() << "\n"; }
    virtual void Visit(Rectangle* rectangle) override { std::cout << "Area of rectangle : " << rectangle->Area() << "\n"; }
    virtual void Visit(Triangle* triangle) override { std::cout << "Area of triangle : " << triangle->Area() << "\n"; }

};

#endif