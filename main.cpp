#include <iostream>
#include <memory>

#include "Shapes/Circle.h"
#include "Shapes/Rectangle.h"
#include "Shapes/Triangle.h"

#include "ShapesVisitors/AreaVisitor.h"

int main() {
    Shape* circle = new Circle(3);
    Shape* rectangle = new Rectangle(2, 4);
    Shape* triangle = new Triangle(3, 4);

    AreaVisitor* areaVisitor = new AreaVisitor();

    circle->Accept(areaVisitor);
    rectangle->Accept(areaVisitor);
    triangle->Accept(areaVisitor);

    delete circle;
    delete rectangle;
    delete triangle;
    delete areaVisitor;

    std::cout << "\nEnd of program.\n";

    return 0;
}