#include <iostream>
#include <vector>
using namespace std;

vector<int> addVectors(vector<int> v1, vector<int> v2) {
    vector<int> v;
    for (int i = 0; i < v1.size(); i++) {
        v.push_back(v1[i] + v2[i]);
    }
    return v;
}

