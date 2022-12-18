#ifndef __SHAPES_H__
#define __SHAPES_H__

class ShapesVisitor;

class Shape {

public:
    virtual ~Shape() = default;
    virtual void Accept(ShapesVisitor*) = 0;
    
};

#endif