void removeFirstAndPrint(vector<string> names){
    // hier komt je code
    names.erase(names.begin());
    vector<string>::iterator it;
    for (it = names.begin(); it != names.end(); it++) {
        cout << *it << endl;
    }
}

