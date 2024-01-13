#include "Geogebra.h"
#include <iostream>

using namespace std;

bool Geogebra::addFunctie(VeeltermFunctie* veeltermfunctie) {
  if (veeltermfuncties.count(veeltermfunctie->getNaam()) ||
      rationalefuncties.count(veeltermfunctie->getNaam()))
    return false;

  veeltermfuncties.insert(pair<string, VeeltermFunctie*>(
      veeltermfunctie->getNaam(), veeltermfunctie));
  return true;
}
bool Geogebra::addFunctie(RationaleFunctie* rationalefunctie) {
  if (veeltermfuncties.count(rationalefunctie->getNaam()) ||
      rationalefuncties.count(rationalefunctie->getNaam()))
    return false;

  rationalefuncties.insert(pair<string, RationaleFunctie*>(
      rationalefunctie->getNaam(), rationalefunctie));
  return true;
}

void Geogebra::print() const {
  for (auto functie : veeltermfuncties) {
    cout << functie.second->toString() << endl;
  }
  for (auto functie : rationalefuncties) {
    cout << functie.second->toString() << endl;
  }
}
