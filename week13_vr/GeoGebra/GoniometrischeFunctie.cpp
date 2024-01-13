//
// Created by nilerrors on 15/12/2023.
//

#include "GoniometrischeFunctie.h"

GoniometrischeFunctie::GoniometrischeFunctie(string naam,
                                             double a,
                                             double b,
                                             double c,
                                             double d)
    : Functie(naam), a(a), b(b), c(c), d(d) {}

GoniometrischeFunctie::~GoniometrischeFunctie() {}

double GoniometrischeFunctie::getPeriode() const {
  return 2 * M_PI / b;
}
