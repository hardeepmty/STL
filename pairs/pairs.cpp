#include <iostream>
using namespace std;

void explainPair() {
    pair<int, int> p1 = {1, 3};

    cout << p1.first << " " << p1.second << endl;

    // Nested pairs
    pair<int, pair<int, int>> p2 = {1, {3, 4}};

    cout << p2.first << " " << p2.second.second << " " << p2.second.first << endl;

    // Array of pairs
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {4, 5}};

    cout << arr[1].second << endl;
}

int main() {
    explainPair();
    return 0;
}
