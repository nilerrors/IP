vector<int> readNumbers(string filename) {
    vector<int> numbers;

    ifstream file{filename};
    string line = "";
    while (getline(file, line)) {
        numbers.push_back(stoi(line));
    }
    
    return numbers;
}

