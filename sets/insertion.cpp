#include <iostream>
#include <set>

int main() {
    std::set<int> mySet;

    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(10); // Ignored since 10 already exists

    return 0;
}


