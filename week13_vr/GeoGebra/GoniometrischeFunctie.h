//
// Created by nilerrors on 15/12/2023.
//

#ifndef WEEK13_VR_GONIOMETRISCHEFUNCTIE_H
#define WEEK13_VR_GONIOMETRISCHEFUNCTIE_H

#include <cmath>
#include "Functie.h"

class GoniometrischeFunctie : public Functie {
protected:
    double a;
    double b;
    double c;
    double d;
public:
    GoniometrischeFunctie(string naam, double a, double b, double c, double d);

    virtual ~GoniometrischeFunctie();

    double getPeriode() const;

    virtual GoniometrischeFunctie* berekenAfgeleide() = 0;
};


#endif //WEEK13_VR_GONIOMETRISCHEFUNCTIE_H
