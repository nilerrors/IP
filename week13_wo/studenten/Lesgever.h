#ifndef STUDENTEN_LESGEVER_H
#define STUDENTEN_LESGEVER_H


#include <string>
#include <vector>
#include "Persoon.h"
#include "Cursus.h"

class Lesgever : public Persoon {
protected:
    vector<Cursus*> cursussen;
public:
    Lesgever(const string &voornaam, const string &achternaam);

    virtual void geeft(Cursus* cursus);
    virtual void showHomepage() const;
};


#endif //STUDENTEN_LESGEVER_H
