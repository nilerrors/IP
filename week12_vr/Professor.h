//
// Created by nilerrors on 10/12/2023.
//

#ifndef WEEK12_VR_PROFESSOR_H
#define WEEK12_VR_PROFESSOR_H

#include <string>
#include <vector>
#include "Cursus.h"
#include "Lesgever.h"
#include "Assistent.h"

using namespace std;

class Assistent;

class Professor : public Lesgever {
    vector<Assistent *> assistenten;

public:
    Professor(const string &voornaam, const string &achternaam);

    string toString() const;

    void voegAssistentToe(Assistent *assistent);

    void showHomepage() const;
};


#endif //WEEK12_VR_PROFESSOR_H
