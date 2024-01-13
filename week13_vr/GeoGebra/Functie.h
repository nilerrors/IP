//
// Created by nilerrors on 15/12/2023.
//

#ifndef WEEK13_VR_FUNCTIE_H
#define WEEK13_VR_FUNCTIE_H

#include <string>
#include <vector>

using namespace std;

class Functie {
    string naam;
protected:
    Functie * afgeleide = nullptr; // gebruikt om de pointer naar de afgeleide functie bij te houden en te verwijderen
public:
    Functie(const string& name);

    virtual ~Functie();

    const string& getNaam() const;

    virtual double berekenFunctiewaarde(double x) const = 0;

    virtual Functie* berekenAfgeleide() = 0;

     string toString() const;

     virtual string getVoorschrift() const = 0;
};


#endif //WEEK13_VR_FUNCTIE_H
