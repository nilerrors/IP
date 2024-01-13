//
// Created by nilerrors on 10/12/2023.
//

#ifndef WEEK12_VR_LESGEVER_H
#define WEEK12_VR_LESGEVER_H

#include "Persoon.h"
#include "Cursus.h"


class Lesgever : public Persoon {
protected:
    vector<Cursus *> cursussen;

public:
    Lesgever(const string &voornaam, const string &achternaam);

    void geeft(Cursus *cursus);
};


#endif //WEEK12_VR_LESGEVER_H
