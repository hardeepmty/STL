#include <iostream>
#include <set>

int main() {
    std::set<int> mySet;

    mySet.insert(10);
    mySet.insert(20);

    int size = mySet.size(); // Returns 2
    bool isEmpty = mySet.empty(); // Returns false

    return 0;
}
