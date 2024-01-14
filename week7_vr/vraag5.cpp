void printContacts(map<int,string> contacts){
    // hier komt je code
    map<int,string>::iterator it;
    for (it = contacts.begin(); it != contacts.end(); it++) {
        cout << it->second << ": " << it->first << endl;
    }
}

