#ifndef GEOGEBRA_H
#define GEOGEBRA_H

#include <vector>
#include <string>
#include "Functie.h"

using namespace std;

class Geogebra {
    vector<Functie *> functies;

public:
    Geogebra();
    virtual ~Geogebra();

    bool addFunctie(Functie* functie);

    Functie* getFunctie(const string& naam) const;

    void print() const;
};

#endif  // GEOGEBRA_B
