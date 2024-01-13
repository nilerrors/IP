#include <iostream>
#include "Professor.h"
#include "Lesgever.h"

void Lesgever::geeft(Cursus* cursus) {
    cursussen.push_back(cursus);
}

Lesgever::Lesgever(const string &voornaam, const string &achternaam) : Persoon(voornaam, achternaam) {}

void Lesgever::showHomepage() const {
    cout << toString() << " is een lesgever op de UAntwerpen en geeft " << endl;
}
