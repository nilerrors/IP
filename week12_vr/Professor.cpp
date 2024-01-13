//
// Created by nilerrors on 10/12/2023.
//

#include <iostream>
#include "Professor.h"

using namespace std;

Professor::Professor(const string &voornaam, const string &achternaam) : Lesgever(voornaam, achternaam) {}


string Professor::toString() const {
    return "Professor " + Persoon::toString();
}

void Professor::voegAssistentToe(Assistent *assistent) {
    assistenten.push_back(assistent);
}

void Professor::showHomepage() const {
    cout << Persoon::toString() << " is een lesgever op de UAntwerpen en geeft" << endl;
    for (auto cursus : cursussen) {
        cout << "- " << cursus->toString() << " (";
        for (auto iter = assistenten.begin(); iter != assistenten.end(); iter++) {
            if (iter != assistenten.begin()) {
                cout << ", ";
            }
            cout << (*iter)->toString();
        }
        cout << ")" << endl;
    }
}
