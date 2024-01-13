//
// Created by nilerrors on 10/12/2023.
//

#include "Persoon.h"

Persoon::Persoon(const string &voornaam, const string &achternaam) : voornaam(voornaam), achternaam(achternaam) {}

const string &Persoon::getVoornaam() const {
    return voornaam;
}

const string &Persoon::getAchternaam() const {
    return achternaam;
}

string Persoon::toString() const {
    return getVoornaam() + " " + getAchternaam();
}
