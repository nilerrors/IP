//
// Created by Tom Hofkens on 09/12/2017.
//

#ifndef UNIVERSITY_COURSE_H
#define UNIVERSITY_COURSE_H

#include <string>
#include <vector>

using namespace std;

class Student;

class Cursus {
private:
    string afkorting;
    string naam;
    int studiepunten;
    vector<Student*> studenten;

public:
    Cursus(const string &afkorting, const string &naam, int studiepunten);

    // helpers
    string toString() const;

    void print() const;

    // getters and setters
    const string &getAfkorting() const;

    const string &getNaam() const;

    int getStudiepunten() const;

    void voegToe(Student *student);

    void verwijder(Student *student);
};



#endif //UNIVERSITY_COURSE_H
