#include <iostream>
#include "myfunctions.h"
#include <cmath>

using namespace std;

tdVector sum(tdVector a, tdVector b)
{
    tdVector result;
    result.x=a.x+b.x;
    result.y=a.y+b.y;
    result.z=a.z+b.z;
    return result;
}

tdVector difference(tdVector a, tdVector b)
{
    tdVector result;
    result.x=a.x-b.x;
    result.y=a.y-b.y;
    result.z=a.z-b.z;
    return result;
}

tdVector multiplyByScalar(tdVector a, double number)
{
    tdVector result;
    result.x=a.x*number;
    result.y=a.y*number;
    result.z=a.z*number;
    return result;
}

double scalarProduct(tdVector a, tdVector b)
{
    return a.x*b.x+a.y*b.y+a.z*b.z;
}

tdVector vectorProduct(tdVector a, tdVector b)
{
    tdVector result;
    result.x=a.y*b.z-a.z*b.y;
    result.y=a.z*b.x-a.x*b.z;
    result.z=a.x*b.y-a.y*b.x;
    return result;
}

double vectorLength(tdVector a)
{
    return sqrt(a.x*a.x+a.y*a.y+a.z*a.z);
}

tdVector enterVector()
{
    tdVector result;
    cout<<"Enter x: ";
    cin>>result.x;
    cout<<"Enter y: ";
    cin>>result.y;
    cout<<"Enter z: ";
    cin>>result.z;
    return result;
}

void showVector(tdVector a)
{
    cout<<"result = ("<<a.x<<"; "<<a.y<<"; "<<a.z<<")";
}

