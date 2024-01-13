#ifndef RATIALEFUNCTIE_H
#define RATIALEFUNCTIE_H

#include <string>
#include "VeeltermFunctie.h"

using namespace std;

class RationaleFunctie {
  string naam;
  VeeltermFunctie teller;
  VeeltermFunctie noemer;

 public:
  const string& getNaam() const;

  void setNaam(const string& naam);
  void setTeller(const VeeltermFunctie& teller);
  void setNoemer(const VeeltermFunctie& noemer);

  string toString() const;
  double berekenFunctiewaarde(double x) const;
  const RationaleFunctie& berekenAfgeleide() const;
};

#endif  // RATIALEFUNCTIE_H
