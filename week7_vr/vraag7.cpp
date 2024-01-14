map<string,int> createFreqTab(vector<string> woorden){
    //hier komt jouw code
    map<string,int> freqs{};
    for (auto woord : woorden) {
        freqs[woord]++;
    }
    return freqs;
}

