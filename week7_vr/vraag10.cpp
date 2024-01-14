#include <iostream>
#include <vector>
using namespace std;

vector<int> addVector(vector<int> v1, int x) {
    vector<int> v;
    for (int i : v1) {
        v.push_back(i + x);
    }
    return v;
}

