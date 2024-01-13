//
// Created by nilerrors on 07/12/2023.
//

#include <iostream>
#include "Cursus.h"

using namespace std;

Cursus::Cursus(const string &afkorting, const string &naam, int studiepunten) : afkorting(afkorting), naam(naam),
                                                                                studiepunten(studiepunten) {}

const string &Cursus::getAfkorting() const {
    return afkorting;
}

const string &Cursus::getNaam() const {
    return naam;
}

int Cursus::getStudiepunten() const {
    return studiepunten;
}

string Cursus::toString() const {
    return naam + " - " + afkorting + " (" + to_string(studiepunten) + ")";
}

void Cursus::voegToe(Student *const &newStudent) {
    studenten.push_back(newStudent);
}

void Cursus::verwijder(Student *const &student) {
    for (int i = 0; i < studenten.size(); i++) {
        if (student->getRolnummer() == studenten[i]->getRolnummer()) {
            studenten.erase(studenten.begin() + i);
        }
    }
}

void Cursus::print() const {
    cout << toString() << endl;
    for (auto student: studenten) {
        cout << "\t" << student->toString() << endl;
    }
}


