//
// Created by nilerrors on 10/12/2023.
//

#ifndef WEEK12_VR_ASSISTENT_H
#define WEEK12_VR_ASSISTENT_H

#include "Lesgever.h"
#include "Professor.h"


class Professor;

class Assistent : public Lesgever {
    Professor* begeleider;

public:
    Assistent(const string &voornaam, const string &achternaam);

    Professor *getBegeleider() const;

    void setBegeleider(Professor *begeleider);

    void showHomepage() const;
};


#endif //WEEK12_VR_ASSISTENT_H
