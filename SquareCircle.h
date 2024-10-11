#pragma once
#include "Square.h"
#include "Circle.h"

class SquareCircle : public Square, public Circle
{
public:
    SquareCircle(double side, double diameter);
    void Test();
};

