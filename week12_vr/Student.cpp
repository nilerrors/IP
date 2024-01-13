//
// Created by nilerrors on 07/12/2023.
//

#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(const string &voornaam, const string &achternaam, const string &rolnummer) : Persoon(voornaam, achternaam),
                                                                                              rolnummer(rolnummer) {}


const string &Student::getRolnummer() const {
    return rolnummer;
}

string Student::toString() const {
    return Persoon::toString() + " (" + rolnummer + ")";
}

int Student::getStudiepunten() const {
    int studiepunten = 0;
    for (const auto &cursus: cursussen) {
        studiepunten += cursus.second->getStudiepunten();
    }
    return studiepunten;
}

bool Student::schrijfIn(Cursus *const &cursus) {
    if (MAX_AANTAL_STUDIEPUNTEN < cursus->getStudiepunten() + getStudiepunten())
        return false;
    cursussen[cursus->getAfkorting()] = cursus;
    cursus->voegToe(this);
    return true;
}

bool Student::schrijfUit(Cursus *const &cursus) {
    if (cursussen.empty() || !cursussen.count(cursus->getAfkorting()))
        return false;
    cursussen.erase(cursus->getAfkorting());
    cursus->verwijder(this);
    return true;
}

void Student::showHomepage() const {
    cout << toString() << " is een student van de UAntwerpen en volgt" << endl;
    for (const auto& cursus : cursussen) {
        cout << "- " << cursus.second->toString() << endl;
    }
}
