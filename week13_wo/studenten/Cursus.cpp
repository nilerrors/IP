//
// Created by Tom Hofkens on 09/12/2017.
//

#include <iostream>
#include <algorithm>

#include "Cursus.h"
#include "Student.h"

using namespace std;

string Cursus::toString() const {
    return naam + " - " + afkorting + " (" + to_string(studiepunten) + ")";
}

Cursus::Cursus(const string &abbreviation, const string &name, int ects) : afkorting(abbreviation), naam(name),
                                                                           studiepunten(ects) {}

void Cursus::voegToe(Student *student) {
    studenten.push_back(student);
}

void Cursus::print() const {
    cout << toString() << endl;
    for(Student* student : studenten){
        cout << '\t' << student->toString() << endl;
    }
}

void Cursus::verwijder(Student *student) {
    studenten.erase(find(studenten.begin(), studenten.end(), student));
}

const string &Cursus::getAfkorting() const {
    return afkorting;
}

const string &Cursus::getNaam() const {
    return naam;
}

int Cursus::getStudiepunten() const {
    return studiepunten;
}
