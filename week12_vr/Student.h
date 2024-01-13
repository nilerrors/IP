//
// Created by nilerrors on 07/12/2023.
//

#ifndef WEEK12_VR_STUDENT_H
#define WEEK12_VR_STUDENT_H

#include <string>
#include <map>
#include "Cursus.h"
#include "Persoon.h"

class Cursus;

using namespace std;

const int MAX_AANTAL_STUDIEPUNTEN = 60;


class Student: public Persoon {
    string rolnummer;
    map<string, Cursus *> cursussen;

public:
    Student(const string &voornaam, const string &achternaam, const string &rolnummer);

    const string &getRolnummer() const;

    int getStudiepunten() const;

    bool schrijfIn(Cursus *const &cursus);

    bool schrijfUit(Cursus *const &cursus);

    string toString() const;

    void showHomepage() const;
};


#endif //WEEK12_VR_STUDENT_H
