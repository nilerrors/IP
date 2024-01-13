#include <iostream>
#include "Student.h"
#include "Cursus.h"
#include "Professor.h"

using namespace std;

int main() {
    Cursus cursus("IP", "Inleiding Programmeren", 9);
    Student student("Sabawoon", "Enayat", "230497");
    Professor prof("Toon", "Calders");

    prof.geeft(&cursus);
    cout << prof.toString() << endl;
    student.schrijfIn(&cursus);
    cursus.print();
    student.schrijfUit(&cursus);
    cursus.print();

    return 0;
}
