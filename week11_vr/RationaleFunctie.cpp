#include "RationaleFunctie.h"
#include <iostream>

const string& RationaleFunctie::getNaam() const {
  return naam;
}

void RationaleFunctie::setNaam(const string& naam) {
  RationaleFunctie::naam = naam;
}

void RationaleFunctie::setTeller(const VeeltermFunctie& teller) {
  RationaleFunctie::teller = teller;
}

void RationaleFunctie::setNoemer(const VeeltermFunctie& noemer) {
  if (noemer.getGraad() == 0 && noemer.berekenFunctiewaarde(1) == 0) {
    cout << "Ongeldige noemer" << endl;
    return;
  }
  RationaleFunctie::noemer = noemer;
}

string RationaleFunctie::toString() const {
  string result;
  result = naam + "(x) = (" + teller.termenToString() + ") / (" +
           noemer.termenToString() + ")";

  return result;
}

double RationaleFunctie::berekenFunctiewaarde(double x) const {
  if (noemer.berekenFunctiewaarde(x) == 0) {
    cout << "Deze waarde ligt buiten het domein van de functie" << endl;
    return 0;
  }
  return teller.berekenFunctiewaarde(x) / noemer.berekenFunctiewaarde(x);
}

const RationaleFunctie& RationaleFunctie::berekenAfgeleide() const {
  RationaleFunctie result;

  result.setNaam(RationaleFunctie::naam + "'");

  // f'(x) g(x) - f(x) g'(x) / (g(x)^2)
  VeeltermFunctie min1 = VeeltermFunctie{};
  min1.setCoefficienten({-1});

  VeeltermFunctie temp1 = teller.berekenAfgeleide();
  temp1.product(noemer);
  VeeltermFunctie temp2 = noemer.berekenAfgeleide();
  temp2.product(teller);
  temp2.product(min1);

  temp1.som(temp2);
  result.setTeller(temp1);

  VeeltermFunctie tempNoemer = noemer;
  tempNoemer.product(noemer);
  result.setNoemer(tempNoemer);

  return result;
}
