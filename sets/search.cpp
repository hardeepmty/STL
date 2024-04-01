#include <iostream>
#include <set>
using namespace std ;

int main() {
    set<int> mySet;

    mySet.insert(10);
    mySet.insert(20);

    auto it = mySet.find(10); // Returns an iterator to 10 if found, otherwise mySet.end()

    if (it != mySet.end()) {
        cout << "Found!" << std::endl;
    } else {
        cout << "Not found!" << std::endl;
    }

    return 0;
}
