#ifndef VEELTERMFUNCTIE_H
#define VEELTERMFUNCTIE_H

#include <cmath>
#include <string>
#include <vector>

using namespace std;

class VeeltermFunctie {
  string naam;
  vector<int> coefficienten;

 public:
  const string& getNaam() const;
  int getGraad() const;

  void setNaam(const string& naam);
  void setCoefficienten(const vector<int>& coefficienten);

  double berekenFunctiewaarde(double x) const;
  VeeltermFunctie berekenAfgeleide() const;

  string toString() const;
  string termenToString() const;

  void som(const VeeltermFunctie& functie);
  void product(const VeeltermFunctie& functie);
};

#endif  // VEELTERMFUNCTIE_H
