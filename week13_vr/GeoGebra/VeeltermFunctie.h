#ifndef VEELTERMFUNCTIE_H
#define VEELTERMFUNCTIE_H

#include <cmath>
#include <string>
#include <vector>
#include "Functie.h"

using namespace std;

class VeeltermFunctie : public Functie {
  vector<int> coefficienten;

 public:
  VeeltermFunctie(string name);
  virtual ~VeeltermFunctie();
  
  int getGraad() const;
  
  void setCoefficienten(const vector<int>& coefficienten);

  void setCoefficient(int index, int coefficient);

  virtual double berekenFunctiewaarde(double x) const;
  virtual VeeltermFunctie* berekenAfgeleide();

  string getVoorschrift() const override;

  void som(VeeltermFunctie* functie);
  void product(VeeltermFunctie* functie);
};

#endif  // VEELTERMFUNCTIE_H
