//
// Created by nilerrors on 10/12/2023.
//

#ifndef WEEK12_VR_PERSOON_H
#define WEEK12_VR_PERSOON_H

#include <string>

using namespace std;

class Persoon {
protected:
    string voornaam;
    string achternaam;

public:
    Persoon(const string &voornaam, const string &achternaam);

    const string &getVoornaam() const;

    const string &getAchternaam() const;

    virtual string toString() const;
};


#endif //WEEK12_VR_PERSOON_H
