#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int main() {
    vector<int> numbers = {5, 2, 7, 1, 8};

    // Sorting the numbers
    sort(numbers.begin(), numbers.end());

    // Printing the sorted numbers
    cout << "Sorted numbers: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
