#ifndef STUDENTEN_PERSOON_H
#define STUDENTEN_PERSOON_H


#include <string>
#include <map>
using namespace std;
class Persoon {

private:
    string voornaam;
    string achternaam;
public:
    Persoon(const string &voornaam, const string &achternaam);

    // getters
    const string &getVoornaam() const;

    const string &getAchternaam() const;

    virtual string toString() const;

    virtual void showHomepage() const;
};


#endif //STUDENTEN_PERSOON_H
