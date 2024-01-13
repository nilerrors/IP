#include "Geogebra.h"
#include <iostream>

using namespace std;

Geogebra::Geogebra() {}

Geogebra::~Geogebra() {
  for (auto& functie : functies) {
    delete functie;
    functie = nullptr;
  }
}

bool Geogebra::addFunctie(Functie* functie) {
  if (getFunctie(functie->getNaam()) != nullptr) {
    return false;
  }
  functies.push_back(functie);
  return true;
}

Functie* Geogebra::getFunctie(const string& naam) const {
  for (auto functie : functies) {
    if (functie == nullptr) {
      continue;
    }
    if (functie->getNaam() == naam) {
      return functie;
    }
  }
  return nullptr;
}

void Geogebra::print() const {
  for (auto functie : functies) {
    cout << functie->toString() << endl;
  }
}
