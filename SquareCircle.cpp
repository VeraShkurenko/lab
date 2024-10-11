#include "SquareCircle.h"
#include <iostream>

using namespace std;

SquareCircle::SquareCircle(double side, double diameter)
    : Square(side), Circle(diameter) {}

void SquareCircle::Test() 
{
    double s_side = getSide();
    double c_diam = getDiameter();

    cout << "Square side: " << s_side << " cm" << endl;
    cout << "Circle diameter: " << c_diam << " cm" << endl;

    if (c_diam <= s_side) 
    {
        cout << "The circle fits inside the square." << endl;
    }
    else
    {
        cout << "The circle does not fit inside the square." << endl;
    }
}

