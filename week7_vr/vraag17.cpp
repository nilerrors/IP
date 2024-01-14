#include <iostream>
#include <vector>
using namespace std;

//Hier komt jouw  code
vector<vector<int>> upper_triangle(vector<vector<int>> matrix) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            if (j < i) {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}

