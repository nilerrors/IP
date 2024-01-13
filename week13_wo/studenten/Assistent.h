#ifndef STUDENTEN_ASSISTENT_H
#define STUDENTEN_ASSISTENT_H


#include "Lesgever.h"
class Professor;

class Assistent : public Lesgever {
private:
    Professor* begeleider;
public:
    Assistent(const string &voornaam, const string &achternaam);

    Professor *getBegeleider() const;

    void setBegeleider(Professor *begeleider);

    virtual void showHomepage() const;
};


#endif //STUDENTEN_ASSISTENT_H
