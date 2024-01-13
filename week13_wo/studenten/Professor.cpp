#include <iostream>
#include "Professor.h"
#include "Assistent.h"
Professor::Professor(const string &voornaam, const string &achternaam) : Lesgever(voornaam,achternaam) {}

string Professor::toString() const {
    return "Professor " + Persoon::toString();
}

void Professor::voegAssistentToe(Assistent *assistent) {
    assistenten.push_back(assistent);
}

void Professor::showHomepage() const {
    Lesgever::showHomepage();
    for(auto cursus: cursussen){
        cout << "- " << cursus->toString() <<  " (";
        for(int i = 0; i < assistenten.size(); i++){
            cout << assistenten[i]->toString();
            if(i < assistenten.size() - 1) {
                cout << ", ";
            }
        }
        cout << ")" << endl;
    }
}