#include <iostream>
#include <set>

int main() {
    std::set<int> mySet;

    mySet.insert(10);
    mySet.insert(20);

    mySet.erase(10); // Removes 10 from the set

    return 0;
}
