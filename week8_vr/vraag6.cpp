#include <algorithm>

void writeNumbersInReverse(string filename, vector<int> numbers) {
    ofstream file{filename};
    reverse(numbers.begin(), numbers.end());
    for (auto number : numbers) {
        file << to_string(number) << endl;
    }
}

