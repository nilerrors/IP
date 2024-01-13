//
// Created by nilerrors on 15/12/2023.
//

#include "Functie.h"

Functie::Functie(const string& naam) : naam(naam) {
    afgeleide = nullptr;
}

Functie::~Functie() {
    delete afgeleide;
}

const string& Functie::getNaam() const {
    return naam;
}

string Functie::toString() const {
    return naam + "(x) = " + getVoorschrift();
}

