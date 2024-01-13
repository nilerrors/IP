//
// Created by nilerrors on 16/12/2023.
//

#include <cmath>
#include <string>
#include "Cosinus.h"
#include "Sinus.h"

Cosinus::Cosinus(string naam, double a, double b, double c, double d) : GoniometrischeFunctie(naam, a, b, c, d) {}

Cosinus::~Cosinus() {}

double Cosinus::berekenFunctiewaarde(double x) const {
  return a * cos(b * (x - c)) + d;
}

GoniometrischeFunctie* Cosinus::berekenAfgeleide() {
  delete Functie::afgeleide;
  Sinus* afgeleide = new Sinus(getNaam() + "'", -a * b, b, c, 0);
  Functie::afgeleide = afgeleide;
  return afgeleide;
}

string Cosinus::getVoorschrift() const {
  return to_string(a) + " cos(" + to_string(b) + "(x" + (c < 0 ? "+" : "-") + to_string(abs(c)) + ")) " + (d < 0 ? "-" : "+") + " " + to_string(abs(d));
}
