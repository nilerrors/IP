void removeAndPrint(map<int,string> contacts, int telToBeRemoved){
    // hier komt je code
    contacts.erase(telToBeRemoved);
    map<int,string>::iterator it;
    for (it = contacts.begin(); it != contacts.end(); it++) {
        cout << it->second << ": " << it->first << endl;
    }
}

