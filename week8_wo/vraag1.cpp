#include <iostream>
using namespace std;

//Hier komt jouw functie
bool integerDivision(int num, int denum, int &quotient, int &rest) {
    quotient = num / denum;
    rest = num % denum;
    return rest == 0;
}

