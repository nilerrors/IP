//
// Created by nilerrors on 16/12/2023.
//

#ifndef WEEK13_VR_SINUS_H
#define WEEK13_VR_SINUS_H

#include "GoniometrischeFunctie.h"


class Sinus : public GoniometrischeFunctie {
public:
    Sinus(string naam, double a, double b, double c, double d);

    virtual ~Sinus();

    virtual double berekenFunctiewaarde(double x) const;

    virtual GoniometrischeFunctie* berekenAfgeleide() override;

    string getVoorschrift() const override;
};


#endif //WEEK13_VR_SINUS_H
