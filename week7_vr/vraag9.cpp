#include <iostream>
#include <vector>
using namespace std;

string vecToString(vector<int> v1) {
    string str = "[";
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
        if (it != v1.begin()) {
            str += ", ";
        }
        str += to_string(*it);
    }
    str += "]";
    return str;
}

