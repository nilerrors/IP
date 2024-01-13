//
// Created by nilerrors on 07/12/2023.
//

#ifndef WEEK12_VR_CURSUS_H
#define WEEK12_VR_CURSUS_H

#include <string>
#include <vector>
#include "Student.h"

class Student;

using namespace std;

class Cursus {
    string afkorting;
    string naam;
    int studiepunten;
    vector<Student *> studenten;

public:
    Cursus(const string &afkorting, const string &naam, int studiepunten);

    const string &getAfkorting() const;

    const string &getNaam() const;

    int getStudiepunten() const;

    void voegToe(Student *const &newStudent);

    void verwijder(Student *const &student);

    void print() const;

    string toString() const;
};


#endif //WEEK12_VR_CURSUS_H
