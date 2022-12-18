#ifndef __SHAPES_VISITOR_H__
#define __SHAPES_VISITOR_H__

class Circle;
class Rectangle;
class Triangle;

class ShapesVisitor {
public:
    virtual ~ShapesVisitor() = default;
    virtual void Visit(Circle*) = 0;
    virtual void Visit(Rectangle*) = 0;
    virtual void Visit(Triangle*) = 0;

};

#endif