#include <iostream>
#include <map>
using namespace std ;

int main() {
    map<string, int> myMap;

    myMap["apple"] = 10;
    myMap["banana"] = 20;

    myMap.erase("apple"); // Removes the key-value pair with key "apple"

    return 0;
}
