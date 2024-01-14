#include <iostream>
#include <cmath>
using namespace std;

//Hier komt jouw functie
int solveQuadraticEquation(int *abc, double *x1, double *x2) {
    int discriminant = computeDiscriminant(abc[0], abc[1], abc[2]);
    if (discriminant < 0) {
        return 0;
    }
    *x1 = (-abc[1] + sqrt(discriminant))/(2 * abc[0]);
    *x2 = (-abc[1] - sqrt(discriminant))/(2 * abc[0]);
    if (discriminant == 0) {
        return 1;
    }
    return 2;
}

