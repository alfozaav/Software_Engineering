// Sets: no tienen elementos repetidos

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main () {
    set<string> names;
    names.insert("cristofer");
    names.insert("cristofer");
    names.insert("alfonso");

    cout << names.size() << endl;
}

// key: value
// oy: dictionaries
// js: objects
// c++: maps
// java: maps
// hash tables