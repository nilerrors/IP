//
// Created by nilerrors on 10/12/2023.
//

#include <iostream>
#include "Assistent.h"

using namespace std;

Assistent::Assistent(const string &voornaam, const string &achternaam) : Lesgever(voornaam, achternaam) {}

Professor *Assistent::getBegeleider() const {
    return begeleider;
}

void Assistent::setBegeleider(Professor *begeleider) {
    Assistent::begeleider = begeleider;
}

void Assistent::showHomepage() const {
    cout << toString() << " is een lesgever op de UAntwerpen en geeft" << endl;
    for (auto cursus : cursussen) {
        cout << "- " << cursus->toString() << " (" << begeleider->toString() << ")" << endl;
    }
}
