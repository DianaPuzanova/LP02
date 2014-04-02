#ifndef MYFUNCTIONS_H
#define MYFUNCTIONS_H

struct tdVector
{
    double x,y,z;
};

tdVector sum(tdVector a, tdVector b);
tdVector difference(tdVector a, tdVector b);
tdVector multiplyByScalar(tdVector a, double number);
double scalarProduct(tdVector a, tdVector b);
tdVector vectorProduct(tdVector a, tdVector b);
double vectorLength(tdVector a);
tdVector enterVector();
void showVector(tdVector a);

#endif
