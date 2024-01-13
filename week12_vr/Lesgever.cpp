//
// Created by nilerrors on 10/12/2023.
//

#include "Lesgever.h"

Lesgever::Lesgever(const string &voornaam, const string &achternaam) : Persoon(
        voornaam, achternaam) {}

void Lesgever::geeft(Cursus *cursus) {
    cursussen.push_back(cursus);
}
