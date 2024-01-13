#ifndef UNIVERSITY_STUDENT_H
#define UNIVERSITY_STUDENT_H

#include <string>
#include <map>
#include "Persoon.h"

class Cursus;

using namespace std;

class Student : public Persoon {
private:
    string rolnummer;
    int studiepunten;
    const int MAX_STUDIEPUNTEN = 60;
    map<string,Cursus*> cursussen; // afkorting is key

public:
    // ctor/dtor
    Student(const string &voornaam, const string &achternaam, const string &rolnummer);

    // helpers
    virtual string toString() const;

    const string &getRolnummer() const;

    // student specific methods
    bool schrijfIn(Cursus *cursus);

    bool schrijfUit(Cursus *cursus);
    virtual void showHomepage() const;

private:
    void voegCursusToe(Cursus *cursus);

    void verwijderCursus(Cursus *cursus);
};

#endif //UNIVERSITY_STUDENT_H
