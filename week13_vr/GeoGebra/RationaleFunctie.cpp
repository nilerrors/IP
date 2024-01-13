#include "RationaleFunctie.h"
#include <iostream>

using namespace std;

RationaleFunctie::RationaleFunctie(string naam) : Functie(naam) {
    teller = nullptr;
    noemer = nullptr;
}

RationaleFunctie::~RationaleFunctie() {
}

void RationaleFunctie::setTeller(VeeltermFunctie* teller) {
  if (RationaleFunctie::teller != nullptr) {
    delete RationaleFunctie::teller;
  }
  RationaleFunctie::teller = teller;
}

void RationaleFunctie::setNoemer(VeeltermFunctie* noemer) {
  if (noemer->getGraad() == 0 && noemer->berekenFunctiewaarde(1) == 0) {
    cout << "Ongeldige noemer" << endl;
    return;
  }
  if (RationaleFunctie::noemer != nullptr) {
    delete RationaleFunctie::noemer;
  }
  RationaleFunctie::noemer = noemer;
}

string RationaleFunctie::getVoorschrift() const {
  return "(" + teller->getVoorschrift() + ") / (" +
                  noemer->getVoorschrift() + ")";
}

bool RationaleFunctie::checkDelingDoorNul(double a) const {
  if (noemer->berekenFunctiewaarde(a) == 0) {
    return true;
  }
  return false;
}

double RationaleFunctie::berekenFunctiewaarde(double x) const {
  if (checkDelingDoorNul(x)) {
    cout << "Deze waarde ligt buiten het domein van de functie" << endl;
    return 0;
  }
  return teller->berekenFunctiewaarde(x) / noemer->berekenFunctiewaarde(x);
}

RationaleFunctie* RationaleFunctie::berekenAfgeleide() {
  delete Functie::afgeleide;
  RationaleFunctie* result = new RationaleFunctie(Functie::getNaam() + "'");
  Functie::afgeleide = result;

  // f'(x) g(x) - f(x) g'(x) / (g(x)^2)
  VeeltermFunctie* min1 = new VeeltermFunctie("min1");
  min1->setCoefficienten({-1});

  VeeltermFunctie* temp1 = teller->berekenAfgeleide();
  temp1->product(noemer);
  VeeltermFunctie* temp2 = noemer->berekenAfgeleide();
  temp2->product(teller);
  temp2->product(min1);

  temp1->som(temp2);
  result->setTeller(temp1);

  VeeltermFunctie* tempNoemer = noemer;
  tempNoemer->product(noemer);
  result->setNoemer(tempNoemer);

  delete min1;
//  delete temp1;
//  delete temp2;

  return result;
}
