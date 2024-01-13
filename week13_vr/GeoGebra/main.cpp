#include <iostream>
#include "VeeltermFunctie.h"
#include "RationaleFunctie.h"
#include "Geogebra.h"
#include "Sinus.h"
#include "Cosinus.h"
using namespace std;

int main() {
    VeeltermFunctie* teller = new VeeltermFunctie("f");
    teller->setCoefficienten({1, 2, 5});

    VeeltermFunctie* noemer = new VeeltermFunctie("g");
    noemer->setCoefficienten({1,-2});

    RationaleFunctie* rationaleFunctie = new RationaleFunctie("h");
    rationaleFunctie->setTeller(teller);
    rationaleFunctie->setNoemer(noemer);

    Sinus* sinus = new Sinus("i",1,2,3,4);
    Cosinus* cosinus = new Cosinus("j",4,3,2,1);

    Geogebra g;
    g.addFunctie(teller);
    g.addFunctie(noemer);
    g.addFunctie(rationaleFunctie);
    g.addFunctie(sinus);
    g.addFunctie(cosinus);

    vector<string> functienamen = {"f","g","h","i","j"};
    Functie* functie;
    Functie* afgeleide;
    for(string functienaam: functienamen){
        functie = g.getFunctie(functienaam);
        cout << functie->toString() << endl;
        cout << functienaam << "(2) = " << functie->berekenFunctiewaarde(2.0) << endl;
        afgeleide = functie->berekenAfgeleide();
        cout << afgeleide->toString() << endl;
        cout << afgeleide->getNaam() << "(2) = " << afgeleide->berekenFunctiewaarde(2.0) << endl;
    }

    return 0;
}