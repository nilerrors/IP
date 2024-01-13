#include <iostream>
#include "Assistent.h"
#include "Professor.h"
Assistent::Assistent(const string &voornaam, const string &achternaam) : Lesgever(voornaam, achternaam) {}

Professor *Assistent::getBegeleider() const {
    return begeleider;
}

void Assistent::setBegeleider(Professor *begeleider) {
    Assistent::begeleider = begeleider;
}

void Assistent::showHomepage() const {
    Lesgever::showHomepage();
    for(auto cursus: cursussen){
        cout << "- " << cursus->toString() <<  " (" << begeleider->toString() << ")" << endl;
    }
}
