#include <iostream>
#include <vector>
#include "Cursus.h"
#include "Student.h"
#include "Professor.h"
#include "Assistent.h"

int main() {
    // student
    Student john("John", "Doe", "12345");
    Student jane("Jane", "Doe", "54321");
    vector<Persoon*> universiteit;
    universiteit.push_back(&john);
    universiteit.push_back(&jane);

    // course
    Cursus ip("IP", "Inleiding programmeren", 9);
    Cursus gas("GAS", "Gegevensabstractie en -structuren", 6);
    Cursus mc("MC", "Monster Cursus", 56);

    vector<Cursus*> cursussen;
    cursussen.push_back(&ip);
    cursussen.push_back(&gas);
    cursussen.push_back(&mc);

    // inschrijven
    john.schrijfIn(&ip);
    john.schrijfIn(&gas);
    john.schrijfIn(&mc);
    jane.schrijfIn(&ip);

    // professor
    Professor toon("Toon", "Calders");
    toon.geeft(&ip);
    Professor els("Els", "Laenens");
    els.geeft(&gas);
    universiteit.push_back(&toon);
    universiteit.push_back(&els);

    // assistenten
    Assistent tom("Tom", "Hofkens");
    tom.setBegeleider(&toon);
    Assistent daphne("Daphne", "Lenders");
    daphne.setBegeleider(&toon);
    tom.geeft(&ip);
    tom.geeft(&gas);
    daphne.geeft(&ip);
    toon.voegAssistentToe(&daphne);
    toon.voegAssistentToe(&tom);
    els.voegAssistentToe(&tom);
    universiteit.push_back(&tom);
    universiteit.push_back(&daphne);

    // print alles
    for(Persoon* member : universiteit){
        cout << member->toString() << endl;
    }
    return 0;
}