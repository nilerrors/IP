#include "VeeltermFunctie.h"

const string& VeeltermFunctie::getNaam() const {
  return naam;
}

int VeeltermFunctie::getGraad() const {
  if (coefficienten.empty())
    return 0;
  return coefficienten.size() - 1;
}

void VeeltermFunctie::setNaam(const string& naam) {
  VeeltermFunctie::naam = naam;
}

void VeeltermFunctie::setCoefficienten(const vector<int>& coefficienten) {
  VeeltermFunctie::coefficienten = coefficienten;
}

string VeeltermFunctie::toString() const {
  string result;
  result = naam + "(x) = " + termenToString();

  return result;
}

string VeeltermFunctie::termenToString() const {
  string result = "";
  for (int i = coefficienten.size() - 1; i < coefficienten.size(); i--) {
    if (i < coefficienten.size() - 1)
      if (coefficienten[i] > 0) {
        result += " + ";
      } else {
        result += " ";
      }
    if (i == 0) {
      result += to_string(coefficienten[i]);
    } else if (i == 1) {
      result += to_string(coefficienten[i]) + " x";
    } else {
      result += to_string(coefficienten[i]) + " x^" + to_string(i);
    }
  }
  return result;
}

double VeeltermFunctie::berekenFunctiewaarde(double x) const {
  double result = 0;
  for (int i = 0; i < coefficienten.size(); i++) {
    result += coefficienten[i] * pow(x, i);
  }
  return result;
}

VeeltermFunctie VeeltermFunctie::berekenAfgeleide() const {
  VeeltermFunctie result;

  result.setNaam(VeeltermFunctie::naam + "'");
  vector<int> coefficienten;

  for (int i = 1; i < VeeltermFunctie::coefficienten.size(); i++) {
    coefficienten.push_back(VeeltermFunctie::coefficienten[i] * i);
  }

  result.setCoefficienten(coefficienten);

  return result;
}

void VeeltermFunctie::som(const VeeltermFunctie& functie) {
  for (int i = 0; i < functie.coefficienten.size(); i++) {
    if (i < coefficienten.size()) {
      coefficienten[i] += functie.coefficienten[i];
    } else {
      coefficienten.push_back(functie.coefficienten[i]);
    }
  }
}

void VeeltermFunctie::product(const VeeltermFunctie& functie) {
  vector<int> temp;
  for (int i = 0; i < coefficienten.size() + functie.coefficienten.size() - 1;
       i++) {
    temp.push_back(0);
  }
  for (int i = 0; i < coefficienten.size(); i++) {
    for (int j = 0; j < functie.coefficienten.size(); j++) {
      temp[i + j] += coefficienten[i] * functie.coefficienten[j];
    }
  }
  coefficienten = temp;
}
