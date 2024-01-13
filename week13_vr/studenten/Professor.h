#ifndef STUDENTEN_PROFESSOR_H
#define STUDENTEN_PROFESSOR_H

#include <string>
#include <vector>
#include "Persoon.h"
#include "Lesgever.h"

using namespace std;
class Cursus;
class Assistent;

class Professor: public Lesgever {
private:
    vector<Assistent*> assistenten;
public:
    Professor(const string &voornaam, const string &achternaam);

    // helper
    string toString() const;

    void voegAssistentToe(Assistent* assistent);

    void showHomepage() const;
};


#endif //STUDENTEN_PROFESSOR_H
