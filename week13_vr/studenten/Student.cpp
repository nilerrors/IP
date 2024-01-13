#include <iostream>
#include <algorithm>
#include "Student.h"
#include "Cursus.h"

string Student::toString() const {
    return Persoon::toString() + " (" + rolnummer + ")";
}

Student::Student(const string &voornaam, const string &achternaam, const string &rolnummer)
        : Persoon(voornaam,achternaam),
          rolnummer(rolnummer),
          studiepunten(0){}

bool Student::schrijfIn(Cursus *cursus) {
    if(studiepunten + cursus->getStudiepunten() > MAX_STUDIEPUNTEN){
        return false;
    } else{
        voegCursusToe(cursus);
        cursus->voegToe(this);
        return true;
    }
}

void Student::voegCursusToe(Cursus *cursus) {
    studiepunten += cursus->getStudiepunten();
    cursussen[cursus->getAfkorting()] = cursus;
}

bool Student::schrijfUit(Cursus *cursus) {
    auto it = cursussen.find(cursus->getAfkorting());
    if(it == cursussen.end()){
        return false;
    }else {
        verwijderCursus(cursus);
        cursus->verwijder(this);
        return true;
    }
}

void Student::verwijderCursus(Cursus *cursus) {
    auto it = cursussen.find(cursus->getAfkorting());
    studiepunten -= cursus->getStudiepunten();
    cursussen.erase(it);
}

const string &Student::getRolnummer() const {
    return rolnummer;
}

void Student::showHomepage() const {
    cout << toString() << " is een student van de UAntwerpen en volgt " << endl;
    for(auto cursus: cursussen){
        cout << "- " << cursus.second->toString() << endl;
    }
}
