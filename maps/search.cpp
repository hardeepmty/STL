#include <iostream>
#include <map>
using namespace std ;

int main() {
    map<string, int> myMap;

    myMap["apple"] = 10;
    myMap["banana"] = 20;

    auto it = myMap.find("apple"); // Returns an iterator to the key-value pair with key "apple"

    if (it != myMap.end()) {
        cout << "Found! Value: " << it->second << endl;
    } else {
        cout << "Not found!" << endl;
    }

    return 0;
}
