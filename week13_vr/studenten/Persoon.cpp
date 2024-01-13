#include "Cursus.h"
#include "Student.h"
#include <algorithm>
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

void Persoon::showWebsite() const {
    cout << "Welkom op de Universiteit Antwerpen! U bent terecht gekomen op de homepage van " << toString() << endl;
    cout << "=====================" << endl;
    showHomepage();
}
