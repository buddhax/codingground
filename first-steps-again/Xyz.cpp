#include <iostream>
#include "Xyz.h"

using namespace std;

Xyz::Xyz()
{
    x=5;
    y=100;
    z=-1;
}

void Xyz::show_x()
{
    cout << "x =" << x << endl;
}

void Xyz::add2x(int k)
{
    x += k;
}

int Xyz::y_by_x()
{
    return y/x;
}