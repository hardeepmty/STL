#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Creating a vector and adding elements
    vector<int> myVector;
    myVector.push_back(10);
    myVector.push_back(20);

    // Accessing elements
    cout << "First Element: " << myVector[0] << endl;
    cout << "Second Element: " << myVector.at(1) << endl;

    // Size and Capacity
    cout << "Size of Vector: " << myVector.size() << endl;
    cout << "Capacity of Vector: " << myVector.capacity() << endl;

    // Iterating over elements
    cout << "Elements: ";
    for (auto it = myVector.begin(); it != myVector.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Removing elements
    myVector.pop_back();

    // Initializing with values
    vector<int> initializedVector(5, 100); // Creates a vector of size 5 with all elements initialized to 100

    return 0;

    //insert function using ITERTATORS
    vector<int>v(2,100) ;
    v.insert(v.begin(),300) ;
    v.insert(v.begin()+1,2, 10) ; //{300,10,10,100,100}
}
