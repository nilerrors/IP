#ifndef RATIALEFUNCTIE_H
#define RATIALEFUNCTIE_H

#include <string>
#include "Functie.h"
#include "VeeltermFunctie.h"

using namespace std;

class RationaleFunctie : public Functie {
  VeeltermFunctie* teller = nullptr;
  VeeltermFunctie* noemer = nullptr;

public:
  RationaleFunctie(string name);
  virtual ~RationaleFunctie();

  void setTeller(VeeltermFunctie* teller);
  void setNoemer(VeeltermFunctie* noemer);

  virtual double berekenFunctiewaarde(double x) const;
  virtual RationaleFunctie* berekenAfgeleide();

  bool checkDelingDoorNul(double a) const;

  string getVoorschrift() const override;
};

#endif  // RATIALEFUNCTIE_H
