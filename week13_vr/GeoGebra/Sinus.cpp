//
// Created by nilerrors on 16/12/2023.
//

#include <cmath>
#include "Sinus.h"
#include "Cosinus.h"


Sinus::Sinus(string naam, double a, double b, double c, double d) : GoniometrischeFunctie(naam, a, b, c, d) {}

Sinus::~Sinus() {}

double Sinus::berekenFunctiewaarde(double x) const {
  return a * sin(b * (x - c)) + d;
}

GoniometrischeFunctie* Sinus::berekenAfgeleide() {
  delete Functie::afgeleide;
  Cosinus* afgeleide = new Cosinus(getNaam() + "'", a * b, b, c, 0);
  Functie::afgeleide = afgeleide;
  return afgeleide;
}

string Sinus::getVoorschrift() const {
  return to_string(a) + " sin(" + to_string(b) + "(x" + (c < 0 ? "+" : "-") + to_string(abs(c)) + ")) " + (d < 0 ? "-" : "+") + " " + to_string(abs(d));
}
