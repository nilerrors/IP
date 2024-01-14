#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double normVector(vector<int> v1) {
    double somVanKwadraten = 0;
    for (auto i : v1) {
        somVanKwadraten += pow(i, 2);
    }
    return sqrt(somVanKwadraten);
}

