#ifndef GEOGEBRA_H
#define GEOGEBRA_H

#include <map>
#include <string>
#include "RationaleFunctie.h"
#include "VeeltermFunctie.h"

using namespace std;

class Geogebra {
  map<string, VeeltermFunctie*> veeltermfuncties;
  map<string, RationaleFunctie*> rationalefuncties;

 public:
  bool addFunctie(VeeltermFunctie* veeltermfunctie);
  bool addFunctie(RationaleFunctie* rationalefunctie);

  void print() const;
};

#endif  // GEOGEBRA_B
