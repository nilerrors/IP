#include "Cursus.h"
#include <iostream>
#include "Persoon.h"

const string &Persoon::getVoornaam() const {
    return voornaam;
}

const string &Persoon::getAchternaam() const {
    return achternaam;
}

string Persoon::toString() const {
    return voornaam + " " + achternaam;
}

Persoon::Persoon(const string &voornaam, const string &achternaam) : achternaam(achternaam), voornaam(voornaam) {}

void Persoon::showHomepage() const {
    cout << toString();
}
